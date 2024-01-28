using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DisplayTimer : MonoBehaviour
{
    public string inputString;
    public PieceManager pieceManager;
    public TMP_Text textMesh;
    // Update is called once per frame
    void Update()
    {
        textMesh.text = pieceManager.GetTime().ToString("0");
    }
}
