using System;
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
    
    public GameObject canvas;
    
    private ActionList al;

    public float offset = 1.0f;

    // Start is called before the first frame update
    void Start()
    {
        PlayerJoined.SetActive(false);
        al = new ActionList();
    }

    private void Update()
    {
        al.Update(Time.deltaTime);
    }

    public override void OnJoinedButtonPressed()
    {
        
        float xPos = canvas.GetComponent<RectTransform>().position.x;
        float yPos = canvas.GetComponent<RectTransform>().position.y;

        Vector3 centerPos = new Vector3(xPos * offset, yPos, 0.0f);
        
        if (!joined)
        {
            PlayerJoined?.SetActive(true);
            joined = true;
            al.Add(new Act.UIMove(centerPos, PlayerJoined, 0.85f, 0, false, Act.Action.Group.None,
                Act.Action.EaseType.EaseOutBounce));
        } else
        {
            joinChecker.StartGame();
        }
        
    }




}
