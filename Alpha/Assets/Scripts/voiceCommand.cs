using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class voiceCommand : MonoBehaviour, IMixedRealitySpeechHandler
{
    public Vector3[] bodyPoints = new Vector3[4];

    void IMixedRealitySpeechHandler.OnSpeechKeywordRecognized(SpeechEventData eventData)
    {
        var pointerSphere = GameObject.Find("pointerSphere");
        if (eventData.Command.Keyword == "body one")
        {
            bodyPoints[0] = pointerSphere.transform.position;
        }
        else if (eventData.Command.Keyword == "body two")
        {
            bodyPoints[1] = pointerSphere.transform.position;
        }
        else if (eventData.Command.Keyword == "body three")
        {
            bodyPoints[2] = pointerSphere.transform.position;
        }
        else if (eventData.Command.Keyword == "body four")
        {
            bodyPoints[3] = pointerSphere.transform.position;
        }
    }
}
