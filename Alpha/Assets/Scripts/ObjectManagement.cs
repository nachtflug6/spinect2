using System.Collections;
using System.Collections.Generic;

using UnityEngine;

public class ObjectManagement : MonoBehaviour
{
    public static GameObject pointerSphere;
    public static GameObject fingerSphere;

    public static int nPoints;
    
    public static GameObject[] modelPoints;

    public static bool[] modelPointFlags;

    public static GameObject[] bodyPoints;

    public static bool[] bodyPointFlags;

    public static GameObject popUpReceivingPoints;
    public static GameObject popUpSelectModelPoints;
    public static GameObject popUpSelectPatientPoints;
    public static GameObject popUpHelpVoiceCommands;

    public static GameObject model;
    public static GameObject modelAxis;
    public static GameObject model3d;
    public static GameObject skin;
    public static GameObject bones;
    public static GameObject patient;

    public static int[] modelGridIndexes;

    //public static 
    public static string urlPath;


    // Start is called before the first frame update
    void Start()
    {
        nPoints = 4;

        pointerSphere = GameObject.Find("PointerSphere");
        fingerSphere = GameObject.Find("FingerSphere");

        modelPointFlags = new bool[nPoints];
        modelPoints = new GameObject[nPoints];

        modelPoints[0] = GameObject.Find("ModelPointA");
        modelPoints[1] = GameObject.Find("ModelPointB");
        modelPoints[2] = GameObject.Find("ModelPointC");
        modelPoints[3] = GameObject.Find("ModelPointD");
        modelAxis = GameObject.Find("modelAxis");
        modelAxis.SetActive(false);

        bodyPointFlags = new bool[nPoints];
        bodyPoints = new GameObject[nPoints];

        bodyPoints[0] = GameObject.Find("BodyPointA");
        bodyPoints[1] = GameObject.Find("BodyPointB");
        bodyPoints[2] = GameObject.Find("BodyPointC");
        bodyPoints[3] = GameObject.Find("BodyPointD");

        popUpReceivingPoints = GameObject.Find("popUpReceivingPoints");
        popUpSelectModelPoints = GameObject.Find("popUpSelectModelPoints");
        popUpSelectPatientPoints = GameObject.Find("popUpSelectPatientPoints");
        popUpHelpVoiceCommands = GameObject.Find("popUpHelpVoiceCommands");
        UserInterface.HidePopUp(popUpReceivingPoints);
        UserInterface.HidePopUp(popUpSelectModelPoints);
        UserInterface.HidePopUp(popUpSelectPatientPoints);
        UserInterface.HidePopUp(popUpHelpVoiceCommands);

        model = GameObject.Find("Model");

        patient = GameObject.Find("Patient");
    }
}
