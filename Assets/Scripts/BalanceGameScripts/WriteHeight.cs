using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WriteHeight : MonoBehaviour
{
    public string inputString;
    public HeightTracker heightTracker;
    public TMP_Text textMesh;
    // Update is called once per frame
    void Update()
    {
        textMesh.text = inputString + " " + heightTracker.GetHeight().ToString("0.0") + "M";
    }
}
