using System;
using System.Collections;
using System.Collections.Generic;
using ChairGame;
using UnityEngine;

public class VictoryTrigger : MonoBehaviour
{
    public GameManager gm;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            int playerIndex = other.GetComponent<ChairController>().GetPlayerIndex();
            gm.StartNextMinigame(playerIndex == 0 ? GameManager.players.Player1 : GameManager.players.Player2);
        }
    }
}
