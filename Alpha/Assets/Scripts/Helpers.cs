using UnityEngine;
using System;
using System.Collections;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections.Generic;
using static ICP.Calc.Icp;
using MathNet.Numerics.LinearAlgebra;

public class Helpers : MonoBehaviour
{

    public static int[] CreateGrid(GameObject objectWithMesh, Vector3 startingPoint, Vector3 boundingBox, Vector3 resolutionBox)
    {
        Debug.Log(objectWithMesh.name);
        int iMax = (int)(boundingBox[0] / resolutionBox[0]);
        int iHalf = (int)(boundingBox[0] / (2 * resolutionBox[0]));
        int jMax = (int)(boundingBox[1] / resolutionBox[1]);
        int jHalf = (int)(boundingBox[1] / (2 * resolutionBox[1]));
        int kMax = (int)(boundingBox[2] / resolutionBox[2]);
        int kHalf = (int)(boundingBox[2] / (2 * resolutionBox[2]));

        objectWithMesh.AddComponent(typeof(Rigidbody));
        objectWithMesh.GetComponent<Rigidbody>().useGravity = false;
        objectWithMesh.GetComponent<Rigidbody>().isKinematic = true;


        Mesh mesh = objectWithMesh.GetComponent<MeshFilter>().mesh;
        Vector3 localStartingPoint = objectWithMesh.transform.InverseTransformPoint(startingPoint);
        Vector3[] vertices = mesh.vertices;
        Vector3[] normalVecs = mesh.normals;

        int startingIndex = FindPoint(vertices, localStartingPoint, 1E10f);

        // Coordiante System
        Vector3 randomVector = new Vector3(1.0f, 0.0f, 0.0f).normalized;
        Vector3 yVec = objectWithMesh.transform.TransformVector(normalVecs[startingIndex]).normalized;
        Vector3 xVec = Vector3.Cross(randomVector, yVec).normalized;
        Vector3 zVec = Vector3.Cross(xVec, yVec).normalized;

        // Shift starting point
        Vector3 position = startingPoint;
        var tempPosition = position; // + 0.01f * yVec;

        int[] indexArray = new int[iMax * jMax];
        int currentIndex = 0;

        for (int i = 0; i < iMax; i++)
        {
            for (int j = 0; j < jMax; j++)
            {
                tempPosition = (xVec * resolutionBox[0]) * (i - iHalf) +
                               (zVec * resolutionBox[2]) * (j - jHalf) +
                               0.1f * yVec +
                               position;

                Ray ray = new Ray(tempPosition, -yVec);

                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.rigidbody)
                    {
                        if (hit.rigidbody.gameObject == objectWithMesh)
                        {

                            int newIndex = FindPoint(vertices, objectWithMesh.transform.InverseTransformPoint(hit.point), 1E10f);

                            if (newIndex > -1)
                            {
                                indexArray[currentIndex] = newIndex;
                                currentIndex++;
                                //GameObject sphere1 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                                //sphere1.transform.localScale = Vector3.one * 0.01f;
                                //sphere1.transform.position = objectWithMesh.transform.TransformPoint(vertices[newIndex]);
                            }
                        }
                    }
                }
            }
        }

        int finalIndexArraySize = currentIndex + 1;

        int[] finalIndexArray = new int[finalIndexArraySize];

        for (int i = 0; i < finalIndexArraySize; i++)
        {
            finalIndexArray[i] = indexArray[i];
        }

        Destroy(objectWithMesh.GetComponent<Rigidbody>());

        return finalIndexArray;
    }


    public static Vector3[] GetVecIndexes(GameObject objectWithMesh, Vector3[] array, int[] indexes)
    {
        int outSize = indexes.Length;

        Vector3[] selectedVertices = new Vector3[outSize];

        for (int i = 0; i < outSize; i++)
        {
            selectedVertices[i] = objectWithMesh.transform.TransformPoint(array[indexes[i]]);
        }

        return selectedVertices;
    }


    public static Vector3[] ProjectPoints(GameObject objectWithMesh, Vector3[] startingPoints, int[] indexArray)
    {
        Mesh mesh = objectWithMesh.GetComponent<MeshFilter>().mesh;
        Vector3[] normalVecs = mesh.normals;
        Vector3[] vectors = GetVecIndexes(objectWithMesh, normalVecs, indexArray);
        int iterations = startingPoints.Length;
        
        Vector3[] endPoints = new Vector3[iterations];

        for (int i = 0; i < iterations; i++)
        {

            RaycastHit hit1;
            RaycastHit hit2;

            Ray rayUp = new Ray(startingPoints[i], vectors[i]);
            Ray rayDown = new Ray(startingPoints[i], -vectors[i]);

            Vector3 pointUp = Vector3.zero;
            Vector3 pointDown = Vector3.zero;


            if (Physics.Raycast(rayUp, out hit1))
            {
                if (hit1.rigidbody)
                {
                    pointUp = hit1.point;
                }
            }
            
            if  (Physics.Raycast(rayDown, out hit2))
            {
                if (hit2.rigidbody)
                {
                    pointDown = hit2.point;
                }
            }

            var distanceUp = Vector3.Distance(startingPoints[i], pointUp);
            var distanceDown = Vector3.Distance(startingPoints[i], pointDown);

            if (distanceUp <= distanceDown)
            {
                endPoints[i] = pointUp;
            }
            else if (distanceUp > distanceDown)
            {
                endPoints[i] = pointDown;
            }
            else
            {
                startingPoints[i] = Vector3.zero;
                endPoints[i] = Vector3.zero;
            }

            if ((startingPoints[i] != Vector3.zero) && (endPoints[i] != Vector3.zero))
            {
                //GameObject sphere1 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                //sphere1.transform.localScale = Vector3.one * 0.01f;
                //sphere1.transform.position = startingPoints[i];

                //GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                //sphere2.transform.localScale = Vector3.one * 0.01f;
                //sphere2.transform.position = endPoints[i];
            }
        }
        return endPoints;
    }


    public static int FindPoint(Vector3[] points, Vector3 point, double maxError)
    {
        int foundIndex = -1;
        for (int i = 0; i < points.Length; i++)
        {
            double newDistance = Vector3.Distance(points[i], point);
            if (newDistance < maxError)
            {
                foundIndex = i;
                maxError = newDistance;
            }
        }
        return foundIndex;
    }

    public static double CalculateError(Vector3[] points1, Vector3[] points2)
    {
        double error = 0.0d;
        int N = points1.Length;
        for (int i = 0; i < N; i++)
        {
            error += Vector3.Distance(points1[i], points2[i]);
        }
        return error;
    }

    public static Vector3 GetEulerRotFromR(Matrix<double> R)
    {
        var R4x4 = Matrix4x4.zero;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                R4x4[i, j] = (float)R[i, j];
            }
        }
        R4x4[3, 3] = 1;
        return R4x4.rotation.eulerAngles;
    }

    public static Vector3[] GetPositionVec(GameObject[] gameObjects, bool local)
    {
        int n = gameObjects.Length;

        Vector3[] positions = new Vector3[n];

        for (int i = 0; i < n; i++)
        {
            if (local)
            {
                positions[i] = gameObjects[i].transform.localPosition;
            }
            else
            {
                positions[i] = gameObjects[i].transform.position;
            }
        }

        return positions;
    }

    public static Vector3 SumVector3Vec(Vector3[] Vector3Vec)
    {
        int n = Vector3Vec.Length;
        Vector3 result = Vector3.zero;

        for (int i = 0; i < n; i++)
        {
            result += Vector3Vec[i];
        }

        return result;
    }

    public static Vector3 GetRotationVector(Vector3[] targetPoints, Vector3[] movingPoints)
    {
        // Calculate R
        var R = GetR(targetPoints, movingPoints);
        var e = GetEulerRotFromR(R);
        return e;
    }

    public static Matrix<double> GetR(Vector3[] targetPoints, Vector3[] movingPoints)
    {
        Matrix<double> R = CreateMatrix.Dense(3, 3, 0.0d);

        // center of mass
        Vector3 p1 = Vector3.zero;
        Vector3 p2 = Vector3.zero;
        int N = targetPoints.Length;
        for (int i = 0; i < N; i++)
        {
            p1 += targetPoints[i];
            p2 += movingPoints[i];
        }
        p1 /= N;
        p2 /= N;

        // subtract COM
        Vector3[] q1 = new Vector3[N];
        Vector3[] q2 = new Vector3[N];
        for (int i = 0; i < N; i++)
        {
            q1[i] = targetPoints[i] - p1;
            q2[i] = movingPoints[i] - p2;
        }

        var t_p1_p2 = p1 - p2;

        Matrix<double> W = CreateMatrix.Dense(3, 3, 0.0d);


        for (int i = 0; i < N; i++)
        {
            double[] vec1 = new double[] { q1[i].x, q1[i].y, q1[i].z };
            Vector<double> mat1Vec = CreateVector.Dense(vec1);
            Matrix<double> mat1 = CreateMatrix.DenseOfColumnVectors(mat1Vec);

            double[] vec2 = new double[] { q2[i].x, q2[i].y, q2[i].z };
            Vector<double> mat2Vec = CreateVector.Dense(vec2);
            Matrix<double> mat2 = CreateMatrix.DenseOfRowVectors(mat2Vec);

            Matrix<double> mat = CreateMatrix.Dense(3, 3, 0.0d);
            mat1.Multiply(mat2, mat);
            W.Add(mat, W);
        }

        // SVD on W
        var svd = W.Svd(true);
        var U = svd.U;
        var V_T = svd.VT;
        R = U.Multiply(V_T);

        return R;
    }
}

