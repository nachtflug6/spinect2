using UnityEngine;
using System;
using MathNet.Numerics.LinearAlgebra;



namespace ICP.Calc
{
    public class Icp : MonoBehaviour
    {

        public static void PoseEstimation(Vector3[] pts1, Vector3[] pts2, ref Matrix<double> R, ref Matrix<double> t)
        {
            // center of mass
            Vector3 p1 = Vector3.zero;
            Vector3 p2 = Vector3.zero;
            int N = pts1.Length;
            for (int i = 0; i < N; i++)
            {
                p1 += pts1[i];
                p2 += pts2[i];
            }
            p1 /= N;
            p2 /= N;

            // subtract COM
            Vector3[] q1 = new Vector3[N];
            Vector3[] q2 = new Vector3[N];
            for (int i = 0; i < N; i++)
            {
                q1[i] = pts1[i] - p1;
                q2[i] = pts2[i] - p2;
            }

            var t_p1_p2 = p1 - p2;

            // compute q1*q2^T   
            //double[,] W = new double[3, 3] { { 0,0,0 },{ 0,0,0 },{ 0,0,0 } };

            Matrix<double> W = CreateMatrix.Dense(3, 3, 0.0d);


            for (int i = 0; i < N; i++)
            {
                //double[,] mat1Vec = new double[3, 1] { { q1[i].x },{ q1[i].y },{ q1[i].z } };
                double[] vec1 = new double[] { q1[i].x, q1[i].y, q1[i].z };
                Vector<double> mat1Vec = CreateVector.Dense(vec1);
                Matrix<double> mat1 = CreateMatrix.DenseOfColumnVectors(mat1Vec);
                //CreateVector.Dense(mat1Vec));
                //double[,] mat2 = new double[1, 3] { { q2[i].x, q2[i].y, q2[i].z } };
                //double[,] mat = Multiply(mat1, 3, 1, mat2, 3);

                double[] vec2 = new double[] { q2[i].x, q2[i].y, q2[i].z };
                Vector<double> mat2Vec = CreateVector.Dense(vec2);
                Matrix<double> mat2 = CreateMatrix.DenseOfRowVectors(mat2Vec);
                //CreateVector.Dense(mat1Vec));

                Matrix<double> mat = CreateMatrix.Dense(3, 3, 0.0d);
                mat1.Multiply(mat2, mat);
                //W = Add(W, mat, 3, 3);
                W.Add(mat, W);
            }

            // SVD on W
            //var svd = new Accord.Math.Decompositions.SingularValueDecomposition(W);  //JaggedSingularValueDecomposition?
            var svd = W.Svd(true);
            //var U = svd.LeftSingularVectors;
            var U = svd.U;
            //var V = svd.RightSingularVectors;
            var V_T = svd.VT;
            //var V_T = Transpose(V, 3, 3);
            //R = Multiply(U, 3, 3, V_T, 3);
            R = U.Multiply(V_T);

            //double[,] p2mat = new double[3, 1] { { p2.x },{ p2.y },{ p2.z } };
            double[] vec3 = new double[] { p2.x, p2.y, p2.z };
            Vector<double> p2matVec = CreateVector.Dense(vec3);
            Matrix<double> p2mat = CreateMatrix.DenseOfColumnVectors(p2matVec);

            //double[,] p1mat = new double[3, 1] { { p1.x }, { p1.y }, { p1.z } };
            double[] vec4 = new double[] { p1.x, p1.y, p1.z };
            Vector<double> p1matVec = CreateVector.Dense(vec4);
            Matrix<double> p1mat = CreateMatrix.DenseOfColumnVectors(p1matVec);

            //double[,] R_mul_p2 = Multiply(R, 3, 3, p2mat, 1);
            var R_mul_p2 = R.Multiply(p2mat);


            double[] vec5 = new double[] { t_p1_p2.x, t_p1_p2.y, t_p1_p2.z };
            Vector<double> tVec = CreateVector.Dense(vec4);
            t = CreateMatrix.DenseOfColumnVectors(tVec);
            //t = Sub(p1mat, R_mul_p2, 3, 1);
            //p1mat.Subtract(R_mul_p2);
        }   
    }
}