using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Couple: MonoBehaviour
{
    public GameObject theSphere;

    public void CoupleTogether()
    {
        theSphere.transform.parent = GameObject.Find("Cube").transform;
    }

    public void Uncouple()
    {
        theSphere.transform.parent = null;
    }
}