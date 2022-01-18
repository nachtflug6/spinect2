using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowAWhile : MonoBehaviour
{
    public float waitTime;

    IEnumerator Load()
    {
        yield return new WaitForSeconds(waitTime);
        gameObject.SetActive(false);
    }

    void Update()
    {
        if (gameObject)
        {
            StartCoroutine(Load());
        }
    }
}