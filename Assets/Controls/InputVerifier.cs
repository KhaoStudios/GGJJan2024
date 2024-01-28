using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Verifies if both players have joined, then lets you in to the game
public class InputVerifier : PlayerController
{
    public PlayerJoinChecker joinChecker;
    public GameObject PlayerJoined;
    public bool joined { get; private set; }

    // Start is called before the first frame update
    void Start()
    {
        PlayerJoined.SetActive(false);
    }

    public override void OnJoinedButtonPressed()
    {
        if (!joined)
        {
            PlayerJoined?.SetActive(true);
            joined = true;
        } else
        {
            joinChecker.StartGame();
        }
        
    }




}
