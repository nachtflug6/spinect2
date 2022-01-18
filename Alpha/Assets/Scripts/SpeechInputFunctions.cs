using UnityEngine;
using System;
using System.Collections;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections.Generic;
//using static Helpers;
using MathNet.Numerics.LinearAlgebra;
using UnityEngine.Networking;



public class SpeechInputFunctions : MonoBehaviour
{

    public API api;

    public enum MACHINE_STATE
    {
        START,
        LOAD_MODEL,
        BODY_POINTS,
        MODEL_POINTS,
        MOVE_MODEL,
        MANUAL_MOVE,
        LOCK
    }

    private static MACHINE_STATE currentState;
    private static MACHINE_STATE oldState;

    void Start()
    {
        oldState = MACHINE_STATE.START;
        currentState = MACHINE_STATE.START;
        Debug.Log(currentState);
    }

    public void BodyPoints()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            currentState = MACHINE_STATE.BODY_POINTS;
            UserInterface.setPointerOn();
            UserInterface.ShowPopUp(ObjectManagement.popUpSelectPatientPoints);
        }
    }

    public void Help()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            UserInterface.ShowPopUp(ObjectManagement.popUpHelpVoiceCommands);
        }
    }

    public void ShowAxis(bool show)
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            if (AllDefined())
            {
                ObjectManagement.modelAxis.SetActive(show);
            }
        }
        else
        {
            ObjectManagement.modelAxis.SetActive(false);
        }
    }

    public void ModelPoints()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            currentState = MACHINE_STATE.MODEL_POINTS;
            UserInterface.setPointerOn();
            UserInterface.ShowPopUp(ObjectManagement.popUpSelectModelPoints);
        }
    }

    public void SetPoint(int n)
    {
        UserInterface.setPointerOn();
        var cursor = ObjectManagement.pointerSphere.transform.position;
        if (currentState == MACHINE_STATE.MODEL_POINTS)
        {
            var point = ObjectManagement.modelPoints[n];
            point.transform.position = cursor;
            ObjectManagement.modelPointFlags[n] = true;
        }
        else if (currentState == MACHINE_STATE.BODY_POINTS)
        {
            var point = ObjectManagement.bodyPoints[n];
            point.transform.position = cursor;
            ObjectManagement.bodyPointFlags[n] = true;
        }
    }

    void Update()
    {
        if (oldState != currentState)
        {
            oldState = currentState;
            Debug.Log(currentState);
        }
    }

    IEnumerator LoadBundle(string url)
    {
        var uwr = UnityWebRequestAssetBundle.GetAssetBundle(url);
        yield return uwr.SendWebRequest();

        // Get an asset from the bundle and instantiate it.
        AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(uwr);
        var loadAsset = bundle.LoadAssetAsync<GameObject>("Assets/Players/MainPlayer.prefab");
        yield return loadAsset;

        Instantiate(loadAsset.asset);
    }

    void OnContentLoaded(GameObject content)
    {
        ObjectManagement.model3d = content;
        
        
        int numChildren = content.transform.childCount;

        for (int i = 0; i < numChildren; i++)
        {
            GameObject child = content.transform.GetChild(i).gameObject;

            if (String.Equals(child.name.ToLower(), "skin"))
            {
                child.GetComponent<Renderer>().material = Resources.Load("Materials/Blue") as Material;
                child.GetComponent<Renderer>().material.color = Color.blue;
                child.AddComponent(typeof(MeshCollider));
                ObjectManagement.skin = child;
            }

            else if (String.Equals(child.name.ToLower(), "bones"))
            {
                child.GetComponent<Renderer>().material = Resources.Load("Materials/Red") as Material;
                child.GetComponent<Renderer>().material.color = Color.red;
                ObjectManagement.bones = child;
            }
        }
    }

    public void LoadModel()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            UserInterface.setPointerOn();
            currentState = MACHINE_STATE.LOAD_MODEL;
            var cursor = GameObject.Find("FingerSphere").transform.position;
            string url = "https://drive.google.com/uc?export=download&id=18KDbMGG_IwCrNAaAK4jEJ0Odje4aoMp7";

            var transform = ObjectManagement.model.transform;

            if (!ObjectManagement.model3d)
            {
                api.GetBundleObject("model", OnContentLoaded, transform, url);
            }

            ObjectManagement.model.transform.position = cursor;
        }
    }

    private bool AllDefined()
    {
        bool allDefined = true;

        for (int i = 0; i < ObjectManagement.nPoints; i++)
        {
            if (!(ObjectManagement.modelPointFlags[i] && ObjectManagement.bodyPointFlags[i] && allDefined))
            {
                allDefined = false;
            }
        }

        return allDefined;
    }

    public void MoveModel()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            if (AllDefined())
            {
                currentState = MACHINE_STATE.MOVE_MODEL;
                UserInterface.setPointerOff();


                // Shifts the model / patient origin to the points' center of mass
                Vector3[] localModelPointPos = Helpers.GetPositionVec(ObjectManagement.modelPoints, true);
                Vector3[] localBodyPointPos = Helpers.GetPositionVec(ObjectManagement.bodyPoints, true);

                Vector3 localCenterModel = Helpers.SumVector3Vec(localModelPointPos) / ObjectManagement.nPoints;
                Vector3 localCenterPatient = Helpers.SumVector3Vec(localBodyPointPos) / ObjectManagement.nPoints;

                int numChildrenModel = ObjectManagement.model.transform.childCount;
                int numChildrenPatient = ObjectManagement.patient.transform.childCount;

                // Shift model/patient to center of mass of points
                ObjectManagement.model.transform.position += ObjectManagement.model.transform.TransformVector(localCenterModel);
                for (int i = 0; i < numChildrenModel; i++)
                {
                    ObjectManagement.model.transform.GetChild(i).transform.localPosition -= localCenterModel;
                }

                ObjectManagement.modelAxis.transform.localPosition = Vector3.zero;

                ObjectManagement.patient.transform.position += ObjectManagement.patient.transform.TransformVector(localCenterPatient);
                for (int i = 0; i < numChildrenPatient; i++)
                {
                    ObjectManagement.patient.transform.GetChild(i).transform.localPosition -= localCenterPatient;
                }

                var objectWithMesh = ObjectManagement.skin;

                var indexArray = Helpers.CreateGrid(objectWithMesh, ObjectManagement.modelPoints[0].transform.position, Vector3.one, Vector3.one * 0.05f);

                // Move the model to the body points' center of mass
                ObjectManagement.model.transform.position = ObjectManagement.patient.transform.position;

                // Put in exception 

                double minError = 0.0d;
                Quaternion bestRotation = Quaternion.identity;
                int k = 0;

                while (k < 1000)
                {
                    var bodyPoints = Helpers.GetPositionVec(ObjectManagement.bodyPoints, false);
                    var modelPoints = Helpers.GetPositionVec(ObjectManagement.modelPoints, false);

                    var rot = Helpers.GetRotationVector(bodyPoints, modelPoints);
                    ObjectManagement.model.transform.Rotate(rot);
                    var error = Helpers.CalculateError(Helpers.GetPositionVec(ObjectManagement.bodyPoints, false), Helpers.GetPositionVec(ObjectManagement.modelPoints, false));

                    if ((Math.Abs(error) < Math.Abs(minError)) || (k == 0))
                    {
                        Debug.Log("updated1");
                        minError = error;
                        bestRotation = ObjectManagement.model.transform.rotation;
                    }

                    k++;

                }

                ObjectManagement.model.transform.rotation = bestRotation;


                double newMinError = 0.0d;
                Quaternion newBestRotation = bestRotation;
                k = 0;

                Vector3[] startingPoints = Helpers.GetVecIndexes(objectWithMesh, objectWithMesh.GetComponent<MeshFilter>().mesh.vertices, indexArray);
                Vector3[] endPoints = Helpers.ProjectPoints(objectWithMesh, startingPoints, indexArray);

                while (k < 1000)
                {
                    var rot = Helpers.GetRotationVector(startingPoints, endPoints);
                    ObjectManagement.model.transform.Rotate(rot * 0.01f);
                    startingPoints = Helpers.GetVecIndexes(objectWithMesh, objectWithMesh.GetComponent<MeshFilter>().mesh.vertices, indexArray);
                    endPoints = Helpers.ProjectPoints(objectWithMesh, startingPoints, indexArray);
                    var errorGeneratedCloud = Helpers.CalculateError(startingPoints, endPoints);
                    var errorDefinedPoints = Helpers.CalculateError(Helpers.GetPositionVec(ObjectManagement.bodyPoints, false), Helpers.GetPositionVec(ObjectManagement.modelPoints, false));

                    if (((Math.Abs(errorGeneratedCloud) < Math.Abs(newMinError)) || (k == 0)) && (Math.Abs(errorDefinedPoints) < Math.Abs(2 * minError)))
                    {
                        Debug.Log("updated2");
                        minError = errorGeneratedCloud;
                        bestRotation = ObjectManagement.model.transform.rotation;
                    }

                    k++;
                }

                ObjectManagement.model.transform.rotation = bestRotation;

            }

            else
            {
                Debug.Log("Please define all points");
            }
        }
    }

    public void ManualMove()
    {
        if (currentState != MACHINE_STATE.LOCK)
        {
            if (AllDefined())
            {
                currentState = MACHINE_STATE.MANUAL_MOVE;
            }
            else
            {
                Debug.Log("Please define all points");
            }
        }
    }

    public void Lock(bool locking)
    {
        if (AllDefined())
        {
            if (locking)
            {
                currentState = MACHINE_STATE.LOCK;
                UserInterface.ShowHidePoints(ObjectManagement.modelPoints, false);
                UserInterface.ShowHidePoints(ObjectManagement.bodyPoints, false);
                ObjectManagement.skin.SetActive(false);
                ShowAxis(false);
            }
            else
            {
                currentState = MACHINE_STATE.START;
                UserInterface.ShowHidePoints(ObjectManagement.modelPoints, true);
                UserInterface.ShowHidePoints(ObjectManagement.bodyPoints, true);
                ObjectManagement.skin.SetActive(true);
            }
        }
    }
    
    public void ManualMoveBy(int axis)
    {
        if(currentState == MACHINE_STATE.MANUAL_MOVE)
        {
            Vector3 moveByVector = Vector3.zero;

            switch (axis)
            {
                case 1:
                    moveByVector = Vector3.right * 0.001f;
                    break;
                case 2:
                    moveByVector = Vector3.up * 0.001f;
                    break;
                case 3:
                    moveByVector = Vector3.forward * 0.001f;
                    break;
                case -1:
                    moveByVector = - Vector3.right * 0.001f;
                    break;
                case -2:
                    moveByVector = - Vector3.up * 0.001f;
                    break;
                case -3:
                    moveByVector = - Vector3.forward * 0.001f;
                    break;
            }

            ObjectManagement.model.transform.position += ObjectManagement.model.transform.TransformVector(moveByVector);
        }
    }

    public void ManualRotateBy(int axis)
    {
        if (currentState == MACHINE_STATE.MANUAL_MOVE)
        {
            Vector3 moveByVector = Vector3.zero;

            switch (axis)
            {
                case 1:
                    moveByVector = Vector3.right;
                    break;
                case 2:
                    moveByVector = Vector3.up;
                    break;
                case 3:
                    moveByVector = Vector3.forward;
                    break;
                case -1:
                    moveByVector = -Vector3.right;
                    break;
                case -2:
                    moveByVector = -Vector3.up;
                    break;
                case -3:
                    moveByVector = -Vector3.forward;
                    break;
            }

            ObjectManagement.model.transform.Rotate(moveByVector);
        }
    }


}