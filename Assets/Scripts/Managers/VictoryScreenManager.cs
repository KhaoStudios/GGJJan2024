using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class VictoryScreenManager : PlayerController
{

    [SerializeField] private TextMeshProUGUI text;
    
    // Start is called before the first frame update
    void Start()
    {
        if (GameManager.Instance.overallWinner == GameManager.players.Player1)
        {
            text.text = "Player 1 Won";
            text.color = Color.blue;
        }


        if (GameManager.Instance.overallWinner == GameManager.players.Player2)
        {
            text.text = "Player 2 Won";
            text.color = Color.red;
        }
            

        text.text += "\n Press A to Play Again";

    }

    private void Update()
    {
        text.fontSize = Mathf.Lerp(90, 150, Mathf.PingPong(Time.time, 1));
    }

    // Update is called once per frame
    public override void OnPrimaryButtonPressed()
    {
        Debug.Log("BUTTON PRESSED");
        GameManager.Instance.StartGame();
    }
}
