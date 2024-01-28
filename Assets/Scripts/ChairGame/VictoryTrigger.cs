using System;
using System.Collections;
using System.Collections.Generic;
using ChairGame;
using UnityEngine;

public class VictoryTrigger : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            int playerIndex = other.GetComponent<ChairController>().GetPlayerIndex();
            GameManager.Instance.StartNextMinigame(playerIndex == 0 ? GameManager.players.Player1 : GameManager.players.Player2);
            Destroy(this.gameObject);
        }
    }
}
