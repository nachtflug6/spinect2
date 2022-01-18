using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;

// From: ARFoundation Unity Tutorial: Asset Bundles (Download 3D Models At Runtime)

public class API : MonoBehaviour {

    public void GetBundleObject(string assetName, UnityAction<GameObject> callback, Transform bundleParent, string BundleURL) {
        StartCoroutine(GetDisplayBundleRoutine(assetName, callback, bundleParent, BundleURL));
    }

    IEnumerator GetDisplayBundleRoutine(string assetName, UnityAction<GameObject> callback, Transform bundleParent, string bundleURL) {

        Debug.Log("Requesting bundle at " + bundleURL);

        //request asset bundle
        UnityWebRequest www = UnityWebRequestAssetBundle.GetAssetBundle(bundleURL);
        yield return www.SendWebRequest();

        if (www.isNetworkError) {
            Debug.Log("Network error");
        } else {
            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(www);
            if (bundle != null) {
                string rootAssetPath = bundle.GetAllAssetNames()[0];
                GameObject arObject = Instantiate(bundle.LoadAsset(rootAssetPath) as GameObject,bundleParent);
                bundle.Unload(false);
                callback(arObject);
            } else {
                Debug.Log("Not a valid asset bundle");
            }
        }
    }
}
