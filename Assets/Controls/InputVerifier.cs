using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Verifies if both players have joined, then lets you in to the game
public class InputVerifier : PlayerController
{
    public GameObject PlayerJoined;
    public bool joined { get; private set; }

    // Start is called before the first frame update
    void Start()
    {
        PlayerJoined.SetActive(false);
    }

    public override void OnJoinedButtonPressed()
    {
        PlayerJoined?.SetActive(true);
        joined = true;
    }


}
