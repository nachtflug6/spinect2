using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;

public class CursorUpdate : MonoBehaviour
{

    private static bool turnedOn;

    public static void updatePointer(GameObject fingerSphere, GameObject pointerSphere, bool show)
    {
        MixedRealityPose pose;
        GameObject hitObject;
        if (show)
        {
            foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
            {
                // Ignore anything that is not a hand because we want articulated hands
                if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
                {
                    foreach (var p in source.Pointers)
                    {
                        if (p is IMixedRealityNearPointer)
                        {
                            // Ignore near pointers, we only want the rays
                            continue;
                        }
                        if (p.Result != null)
                        {
                            var startPoint = p.Position;
                            if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Both, out pose))  //Check with Handedness.Both
                            {
                                startPoint = pose.Position;
                            }
                            var endPoint = p.Result.Details.Point;
                            hitObject = p.Result.Details.Object;

                            fingerSphere.SetActive(true);
                            fingerSphere.transform.position = startPoint;


                            if (hitObject)
                            {
                                pointerSphere.SetActive(true);
                                pointerSphere.transform.position = endPoint;

                            }
                            else
                            {
                                pointerSphere.SetActive(false);
                            }
                        }
                    }
                }
            }
        }
        else
        {
            fingerSphere.SetActive(false);
            pointerSphere.SetActive(false);
        }
    }

    public static void setOn()
    {
        turnedOn = true;
    }

    public static void setOff()
    {
        turnedOn = false;
    }

    public void CreatePopUp(GameObject popUp)
    {
        popUp.SetActive(true);
        popUp.transform.position = Camera.main.transform.forward + Camera.main.transform.position;
        popUp.transform.rotation = Camera.main.transform.rotation;
        StartCoroutine(PopupCoroutine(popUp));
    }

    public static void HidePopUp(GameObject popUp)
    {
        popUp.SetActive(false);
    }

    IEnumerator PopupCoroutine(GameObject popUp)
    {
        yield return new WaitForSeconds(2);
        popUp.SetActive(false);
    }

    public static void ShowPopUp(GameObject popUp)
    {
        popUp.SetActive(true);
        popUp.transform.position = Camera.main.transform.forward + Camera.main.transform.position;
        popUp.transform.rotation = Camera.main.transform.rotation;
    }

    void Start()
    {
        turnedOn = false;
    }

    void Update()
    {
        updatePointer(ObjectManagement.fingerSphere, ObjectManagement.pointerSphere, turnedOn);
    }
}
