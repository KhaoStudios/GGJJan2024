using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerJoinChecker : MonoBehaviour
{
    public InputVerifier verifierP1;
    public InputVerifier verifierP2;
    public bool BothPlayersJoined;
    public GameObject ReadyPanel;

    private void Start()
    {
        ReadyPanel.SetActive(false);
    }

    // Loads the scene if both players joined (This can be made more generic)
    void Update()
    {
        if (verifierP1 == null  || verifierP2 == null) return;

        if (verifierP1.joined && verifierP2.joined)
        {
            BothPlayersJoined = true;
            ReadyPanel.SetActive(true);
        }
    }

    // This can be changed out for anything, for now load bananagame
    public void StartGame()
    {
        if (BothPlayersJoined)
        {
            Debug.Log("Player join checker: StartGame");
            SceneManager.LoadScene("BananaGame");
        }

    }
}
