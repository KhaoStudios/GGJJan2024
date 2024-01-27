using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerJoinChecker : MonoBehaviour
{
    public InputVerifier verifierP1;
    public InputVerifier verifierP2;

    // Loads the scene if both players joined (This can be made more generic)
    void Update()
    {
        if (verifierP1 == null  || verifierP2 == null) return;

        if (verifierP1.joined && verifierP2.joined)
        {
            SceneManager.LoadScene("BananaGame");
        }
    }
}
