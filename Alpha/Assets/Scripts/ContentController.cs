using UnityEngine;

public class ContentController : MonoBehaviour {

    public API api;

    public void LoadContent(string name, string url) {
        DestroyAllChildren();
        api.GetBundleObject(name, OnContentLoaded, transform, url);
    }

    void OnContentLoaded(GameObject content) {
        //do something cool here
        Debug.Log("Loaded: " + content.name);
    }

    void DestroyAllChildren() {
        foreach (Transform child in transform) {
            Destroy(child.gameObject);
        }
    }
}
