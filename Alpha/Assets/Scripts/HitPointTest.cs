//using UnityEngine;
//using System;
//using System.Collections;
//using Microsoft.MixedReality.Toolkit;
//using Microsoft.MixedReality.Toolkit.Input;
//using Microsoft.MixedReality.Toolkit.Utilities;
//using static ICP.Calc.Icp;
//using static ObjFromUrl.ObjFromStream;
//using Microsoft.MixedReality.Toolkit.Experimental.UI;


//public class HitPointTest : MonoBehaviour
//{

//    // Machine states
//    private enum MACHINE_STATE
//    {
//        START,
//        LOAD_MODEL,
//        BODY_POINTS,
//        MODEL_POINTS,
//        MOVE_MODEL,
//        MANUAL,
//        LOCK
//    }

//    private MACHINE_STATE currentState;
//    private string keyword;
//    private bool speechCommand;
//    private int numPoints;
//    private int selectedPatientPoints;
//    private int selectedModelPoints;
//    private string urlPath;

//    // Game Objects
//    private GameObject popUpBox;
//    private GameObject popUpSelectModelPoints;
//    private GameObject popUpSelectPatientPoints;
//    private GameObject popUpHelpVoiceCommands;
//    private GameObject modelAxis;

//    MixedRealityPose pose;

//    // Pointers
//    private GameObject fingerSphere;
//    private GameObject pointerSphere;

//    private GameObject hitObject;

//    // Patient
//    private GameObject patient;
//    private GameObject patientMesh;
//    public GameObject[] bodyPoints;

//    // Model
//    private GameObject model;
//    private GameObject model3d;
//    public GameObject[] modelPoints;

//    // Colors
//    private Color[] colors;

//    // Keyboard
//    public GameObject keyboardObject;
//    public GameObject keyboardText;

//    Mesh mesh;
//    Vector3[] vertices;

//    void Start()
//    {
//        numPoints = 6;

//        currentState = MACHINE_STATE.START;
//        speechCommand = false;

//        // Create GameObjects
//        InitPointerSpheres();

//        // Flags to insure that all points were selected before moving the model
//        selectedPatientPoints = 0b00000000;
//        selectedModelPoints = 0b00000000;

//        modelAxis = GameObject.Find("modelAxis");
//        modelAxis.SetActive(false);
        
//        // Keyboard
//        keyboardObject = GameObject.Find("keyboard");
//        keyboardObject.GetComponent<MixedRealityKeyboard>().HideKeyboard();

//        keyboardText = GameObject.Find("MixedRealityKeyboardPreview");
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().gameObject.SetActive(false);

//        popUpBox = GameObject.Find("popUpReceivingPoints");
//        popUpSelectModelPoints = GameObject.Find("popUpSelectModelPoints");
//        popUpSelectPatientPoints = GameObject.Find("popUpSelectPatientPoints");
//        popUpHelpVoiceCommands = GameObject.Find("popUpHelpVoiceCommands");
//        HidePopUp(popUpBox);
//        HidePopUp(popUpSelectModelPoints);
//        HidePopUp(popUpSelectPatientPoints);
//        HidePopUp(popUpHelpVoiceCommands);
//    }

//    public void SetUrl()
//    {
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().gameObject.SetActive(false);
//        urlPath = keyboardObject.GetComponent<MixedRealityKeyboard>().Text;  //yze83xca
//    }

//    public void ShowKeyboard()
//    {
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().gameObject.SetActive(true);
//        keyboardObject.GetComponent<MixedRealityKeyboard>().ShowKeyboard("https://tinyurl.com/");
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().Text = keyboardObject.GetComponent<MixedRealityKeyboard>().Text;
//    }

//    public void CloseKeyboardPreview()
//    {
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().gameObject.SetActive(false);
//    }

//    // Only for unity debuging:
//    public void HideKeyboard()
//    {
//        keyboardObject.GetComponent<MixedRealityKeyboard>().HideKeyboard();
//        keyboardText.GetComponent<MixedRealityKeyboardPreview>().gameObject.SetActive(false);
//    }


//    public void SetKeyword(string word)
//    {
//        keyword = word;
//        speechCommand = true;
//    }


//    private bool WereAllPointsSelected()
//    {
//        if (selectedModelPoints != 0b00111111)
//        {
//            PopUp(popUpSelectModelPoints);
//            return false;
//        }
//        if (selectedPatientPoints != 0b00111111)
//        {
//            PopUp(popUpSelectPatientPoints);
//            return false;
//        }
//        return true;
//    }

//    private GameObject InitPoint(string name, float size, bool withCollider)
//    {
//        GameObject point = GameObject.CreatePrimitive(PrimitiveType.Sphere);
//        point.transform.localScale = Vector3.one * size;
//        point.name = name;
//        if (!withCollider)
//        {
//            Destroy(point.GetComponent<Collider>());
//        }
//        return point;
//    }

//    private void InitPointerSpheres()
//    {
//        pointerSphere = InitPoint("pointerSphere", 0.03f, false);
//        fingerSphere = InitPoint("fingerSphere", 0.03f, false);
//        pointerSphere.GetComponent<Renderer>().material.color = Color.red;
//        fingerSphere.GetComponent<Renderer>().material.color = Color.blue;
//    }

//    public void UpdatePointer()
//    {
//        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
//        {
//            // Ignore anything that is not a hand because we want articulated hands
//            if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
//            {
//                foreach (var p in source.Pointers)
//                {
//                    if (p is IMixedRealityNearPointer)
//                    {
//                        // Ignore near pointers, we only want the rays
//                        continue;
//                    }
//                    if (p.Result != null)
//                    {
//                        var startPoint = p.Position;
//                        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Both, out pose))  //Check with Handedness.Both
//                        {
//                            startPoint = pose.Position;
//                        }
//                        var endPoint = p.Result.Details.Point;
//                        hitObject = p.Result.Details.Object;

//                        fingerSphere.transform.position = startPoint;

//                        if (hitObject)
//                        {
//                            pointerSphere.SetActive(true);
//                            pointerSphere.transform.position = endPoint;
//                        }
//                        else
//                        {
//                            pointerSphere.SetActive(false);
//                        }
//                    }
//                }
//            }
//        }
//    }

//    // Update is called once per frame
//    void Update()
//    {
//        UpdatePointer();

//        if (keyboardObject.GetComponent<MixedRealityKeyboard>().Visible)
//        {
//            keyboardText.GetComponent<MixedRealityKeyboardPreview>().Text = keyboardObject.GetComponent<MixedRealityKeyboard>().Text;
//        }

//        if (speechCommand)
//        {
//            speechCommand = false;
//            Debug.Log(keyword);

//            Vector3 currentPosition = Vector3.zero;
//            bool setPoints = false;
//            int currentIndex = -1;
//            MACHINE_STATE oldState = currentState;

//            if (currentState == MACHINE_STATE.BODY_POINTS)
//            {
//                setPoints = true;
//                //currentPosition = fingerSphere.transform.position;
//                currentPosition = pointerSphere.transform.position;
//            }
//            else if (currentState == MACHINE_STATE.MODEL_POINTS)
//            {
//                setPoints = true;
//                currentPosition = pointerSphere.transform.position;
//            }

//            switch (keyword)
//            {
//                case "help":
//                    ShowPopUp(popUpHelpVoiceCommands);
//                    break;
//                case "close help":
//                    HidePopUp(popUpHelpVoiceCommands);
//                    break;
//                case "one":
//                    if (setPoints)
//                    {
//                        currentIndex = 1;
//                    }
//                    break;
//                case "two":
//                    if (setPoints)
//                    {
//                        currentIndex = 2;
//                    }
//                    break;
//                case "three":
//                    if (setPoints)
//                    {
//                        currentIndex = 3;
//                    }
//                    break;
//                case "four":
//                    if (setPoints)
//                    {
//                        currentIndex = 4;
//                    }
//                    break;
//                case "five":
//                    if (setPoints)
//                    {
//                        currentIndex = 5;
//                    }
//                    break;
//                case "six":
//                    if (setPoints)
//                    {
//                        currentIndex = 6;
//                    }
//                    break;
//                case "load model":
//                    currentState = MACHINE_STATE.LOAD_MODEL;
//                    LoadModel();
//                    break;
//                //case "patient":
//                //    patientMesh = hitObject;
//                //    patient.transform.parent = patientMesh.transform;
//                //    break;
//                case "body points":
//                    currentState = MACHINE_STATE.BODY_POINTS;
//                    PopUp(popUpBox);
//                    break;
//                case "model points":
//                    currentState = MACHINE_STATE.MODEL_POINTS;
//                    PopUp(popUpBox);
//                    break;
//                case "move model":
//                    if (WereAllPointsSelected())
//                    {
//                        currentState = MACHINE_STATE.MOVE_MODEL;
//                        MoveModelToPatient();
//                    }
//                    break;
//                case "manual move":
//                    if (WereAllPointsSelected())
//                    {
//                        currentState = MACHINE_STATE.MANUAL;
//                        ManualMoveModelToPatient();
//                    }
//                    break;
//                case "lock":
//                    currentState = MACHINE_STATE.LOCK;
//                    HidePoints();
//                    break;
//                case "unlock":
//                    if (currentState == MACHINE_STATE.LOCK)
//                    {
//                        currentState = MACHINE_STATE.START;
//                        ShowPoints();
//                    }
//                    break;
//                // Fine tuning of the model:
//                case "show axis":
//                    modelAxis.SetActive(true);
//                    break;
//                case "hide axis":
//                    modelAxis.SetActive(false);
//                    break;
//                case "move plus x":
//                    MovePlusX(model);
//                    break;
//                case "move minus x":
//                    MoveMinusX(model);
//                    break;
//                case "move plus y":
//                    MovePlusY(model);
//                    break;
//                case "move minus y":
//                    MoveMinusY(model);
//                    break;
//                case "move plus z":
//                    MovePlusZ(model);
//                    break;
//                case "move minus z":
//                    MoveMinusZ(model);
//                    break;
//                case "rotate plus x":
//                    RotatePlusX(model);
//                    break;
//                case "rotate minus x":
//                    RotateMinusX(model);
//                    break;
//                case "rotate plus y":
//                    RotatePlusY(model);
//                    break;
//                case "rotate minus y":
//                    RotateMinusY(model);
//                    break;
//                case "rotate plus z":
//                    RotatePlusZ(model);
//                    break;
//                case "rotate minus z":
//                    RotateMinusZ(model);
//                    break;
//                case "show keyboard":
//                    ShowKeyboard();
//                    break;
//                case "hide keyboard":
//                    HideKeyboard();
//                    break;
//            }
//            keyword = "";

//            if (currentIndex > 0)
//            {
//                int i = currentIndex - 1;

//                switch (oldState)
//                {
//                    case MACHINE_STATE.BODY_POINTS:
//                        if (!patient.activeSelf)
//                        {
//                            patient.SetActive(true);
//                        }
//                        bodyPoints[i].SetActive(true);
//                        bodyPoints[i].transform.position = currentPosition;
//                        selectedPatientPoints |= (1 << i);
//                        Debug.Log(selectedPatientPoints);
//                        break;
//                    case MACHINE_STATE.MODEL_POINTS:
//                        modelPoints[i].SetActive(true);
//                        modelPoints[i].transform.position = currentPosition;
//                        selectedModelPoints |= (1 << i);
//                        Debug.Log(selectedModelPoints);
//                        break;
//                }
//            }
//        }
//    }

//    public void LoadModel()
//    {
//        if (model3d)
//        {
//            model.transform.position = fingerSphere.transform.position;
//            mesh = model3d.GetComponent<MeshFilter>().mesh;
//            vertices = mesh.vertices;
//        }
//        else
//        {
//            colors = new[] { Color.white, Color.magenta, Color.black, Color.green, Color.yellow, Color.cyan };

//            model = new GameObject("Model");
//            model.transform.position = fingerSphere.transform.position;

//            patient = new GameObject("Patient");

//            // Add loading code here!

//            //model3d = GameObject.Find("3D model 2");
//            model3d = ObjFromUrl.ObjFromStream.LoadObjectFromStream(urlPath);
//            model3d.name = "Model3D";
//            model3d.transform.parent = model.transform;
//            model3d.transform.localPosition = Vector3.zero;

//            bodyPoints = new GameObject[numPoints];
//            modelPoints = new GameObject[numPoints];

//            for (int i = 0; i < numPoints; i++)
//            {
//                int pointIndex = i + 1;
//                bodyPoints[i] = GameObject.CreatePrimitive(PrimitiveType.Sphere);
//                bodyPoints[i].name = "BodyPoint" + pointIndex;
//                bodyPoints[i].transform.parent = patient.transform;
//                bodyPoints[i].transform.localScale = Vector3.one * 0.01f;
//                Destroy(bodyPoints[i].GetComponent<Collider>());
//                bodyPoints[i].GetComponent<Renderer>().material.color = colors[i];
//                bodyPoints[i].SetActive(false);

//                modelPoints[i] = GameObject.CreatePrimitive(PrimitiveType.Sphere);
//                modelPoints[i].name = "ModelPoint" + pointIndex;
//                modelPoints[i].transform.parent = model.transform;
//                modelPoints[i].transform.localScale = Vector3.one * 0.02f;
//                Destroy(modelPoints[i].GetComponent<Collider>());
//                modelPoints[i].GetComponent<Renderer>().material.color = colors[i];
//                modelPoints[i].SetActive(false);
//            }
//        }
//    }


//    private Vector3 CalculateCenter(GameObject[] objList)
//    {
//        Vector3 center = Vector3.zero;
//        foreach (GameObject obj in objList)
//        {
//            center += obj.transform.localPosition;
//        }
//        center /= objList.Length;
//        return center;
//    }

//    private Vector3 CalculateGlobalCenter(GameObject[] objList)
//    {
//        Vector3 globalCenter = Vector3.zero;
//        foreach (GameObject obj in objList)
//        {
//            globalCenter += obj.transform.position;
//        }
//        globalCenter /= objList.Length;
//        return globalCenter;
//    }

//    private float CalculateError(GameObject[] pointsSrc, GameObject[] pointsDst)
//    {
//        float error = 0.0f;
//        int N = pointsSrc.Length;
//        for (int i = 0; i < N; i++)
//        {
//            error += Vector3.Distance(pointsSrc[i].transform.position, pointsDst[i].transform.position);
//        }
//        return error;
//    }

//    private void ShiftToPointsCenterOfMass()
//    {
//        Vector3 centerModel = CalculateCenter(modelPoints);
//        Vector3 centerPatient = CalculateCenter(bodyPoints);
//        int numChildrenModel = model.transform.childCount;
//        int numChildrenPatient = patient.transform.childCount;

//        // Shift model/patient to center of mass of points
//        model.transform.position += centerModel;
//        for (int i = 0; i < numChildrenModel; i++)
//        {
//            model.transform.GetChild(i).transform.localPosition -= centerModel;
//        }
//        patient.transform.position += centerPatient;
//        for (int i = 0; i < numChildrenPatient; i++)
//        {
//            patient.transform.GetChild(i).transform.localPosition -= centerPatient;
//        }
//    }

//    private void ApplyTransformation(ref double error, ref Vector3 position, ref Quaternion rotation) 
//    {
//        // Calculate R and t
//        double[,] R = new double[3, 3];
//        double[,] t = new double[3, 1];
//        PoseEstimation(bodyPoints, modelPoints);//, ref R, ref t);

//        // Transform R into a 4x4 matrix
//        // https://forum.unity.com/threads/convert-3x3-rotation-matrix-to-euler-angles.1086392/
//        var R4x4 = Matrix4x4.zero;
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                R4x4[i, j] = (float)R[i, j];
//            }
//        }
//        R4x4[3, 3] = 1;
//        var e = R4x4.rotation.eulerAngles;
//        model.transform.position += new Vector3(System.Convert.ToSingle(t[0, 0]), System.Convert.ToSingle(t[1, 0]), System.Convert.ToSingle(t[2, 0]));
//        model.transform.Rotate(e);
        
//        // Storing current values
//        position = model.transform.position;
//        rotation = model.transform.rotation; 
//        error = CalculateError(bodyPoints, modelPoints);
//        Debug.Log(error);
//    }

//    private void MoveModelToPatient()
//    {
//        // Shifts the model / patient origin to the points' center of mass  
//        ShiftToPointsCenterOfMass();

//        // Moves the model to the body points' center of mass
//        model.transform.position = CalculateGlobalCenter(bodyPoints);

//        double error = 0.0;
//        Vector3 position = Vector3.zero;
//        Quaternion rotation = Quaternion.identity;

//        double minError = 0.0;
//        Vector3 bestPosition = Vector3.zero;
//        Quaternion bestRotation = Quaternion.identity;
//        int bestI = 0;
//        ApplyTransformation(ref minError, ref bestPosition, ref bestRotation);

//        for (int i = 1; i < 100; i++)
//        {
//            ApplyTransformation(ref error, ref position, ref rotation);
//            if (Math.Abs(error) < Math.Abs(minError))
//            {
//                minError = error;
//                bestPosition = position;
//                bestRotation = rotation;
//                bestI = i;
//            }
//        }

//        model.transform.position = bestPosition;
//        model.transform.rotation = bestRotation;
//        Debug.Log("finish");
//        Debug.Log(bestI);
//    }


//    private void ManualMoveModelToPatient()
//    {
//        ShiftToPointsCenterOfMass();
//        model.transform.position = CalculateGlobalCenter(bodyPoints);
//    }


//        // Fine tuning functions
//        public void MovePlusX(GameObject model)
//    {
//        model.transform.position += new Vector3(0.01f, 0, 0);
//    }

//    public void MoveMinusX(GameObject model)
//    {
//        model.transform.position += new Vector3(-0.01f, 0, 0);
//    }

//    public void MovePlusY(GameObject model)
//    {
//        model.transform.position += new Vector3(0, 0.01f, 0);
//    }

//    public void MoveMinusY(GameObject model)
//    {
//        model.transform.position += new Vector3(0, -0.01f, 0);
//    }

//    public void MovePlusZ(GameObject model)
//    {
//        model.transform.position += new Vector3(0, 0, 0.01f);
//    }

//    public void MoveMinusZ(GameObject model)
//    {
//        model.transform.position += new Vector3(0, 0, -0.01f);
//    }

//    public void RotatePlusX(GameObject model)
//    {
//        model.transform.Rotate(2.0f, 0.0f, 0.0f, Space.Self);
//    }

//    public void RotateMinusX(GameObject model)
//    {
//        model.transform.Rotate(-2.0f, 0.0f, 0.0f, Space.Self);
//    }

//    public void RotatePlusY(GameObject model)
//    {
//        model.transform.Rotate(0.0f, 2.0f, 0.0f, Space.Self);
//    }

//    public void RotateMinusY(GameObject model)
//    {
//        model.transform.Rotate(0.0f, -2.0f, 0.0f, Space.Self);
//    }

//    public void RotatePlusZ(GameObject model)
//    {
//        model.transform.Rotate(0.0f, 0.0f, 2.0f, Space.Self);
//    }

//    public void RotateMinusZ(GameObject model)
//    {
//        model.transform.Rotate(0.0f, 0.0f, -2.0f, Space.Self);
//    }

//    public void PopUp(GameObject popUp)
//    {
//        popUp.SetActive(true);
//        popUp.transform.position = Camera.main.transform.forward + Camera.main.transform.position;
//        popUp.transform.rotation = Camera.main.transform.rotation;
//        StartCoroutine(PopupCoroutine(popUp));
//    }

//    public void HidePoints()
//    {
//        if(currentState != MACHINE_STATE.START)
//        {
//            for (int i = 0; i < numPoints; i++)
//            {
//                bodyPoints[i].SetActive(false);
//                modelPoints[i].SetActive(false);
//            }
//        }
//    }

//    public void ShowPoints()
//    {
//        for (int i = 0; i < numPoints; i++)
//        {
//            bodyPoints[i].SetActive(true);
//            modelPoints[i].SetActive(true);
//        }
//    }

//    public void HidePopUp(GameObject popUp)
//    {
//        popUp.SetActive(false);
//    }

//    IEnumerator PopupCoroutine(GameObject popUp)
//    {
//        yield return new WaitForSeconds(2);
//        popUp.SetActive(false);
//    }

//    public void ShowPopUp(GameObject popUp)
//    {
//        popUp.SetActive(true);
//        popUp.transform.position = Camera.main.transform.forward + Camera.main.transform.position;
//        popUp.transform.rotation = Camera.main.transform.rotation;
//    }
//}
