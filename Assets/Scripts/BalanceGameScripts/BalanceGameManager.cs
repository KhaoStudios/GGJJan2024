using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceManager : MonoBehaviour
{
    public ActionList actionList;
    public float height;

    public PlayerController player1;
    public PlayerController player2;


    bool player1HasPiece = false;
    bool player2HasPiece = false;

    public Transform Player1SpawnLocation;
    public Transform Player2SpawnLocation;

    public List<GameObject> avaliablePieces;

    private int player1Seed;
    private int player2Seed;
    private int pieces;
    private void Start()
    {
        actionList = new ActionList();
        //Want to match order of items for both players.
        player1Seed = (int)System.DateTime.Now.Ticks;
        player2Seed = player1Seed;
        pieces = avaliablePieces.Count;
    }
    // Update is called once per frame
    void Update()
    {
        actionList.Update(Time.deltaTime);
        if (player1HasPiece == false)
        {
            //Want fixed ordering so declaring and updating seed.
            Random.InitState(player1Seed);
            player1Seed = Random.Range(0 , int.MaxValue);
            int piece = player1Seed % pieces;

            Instantiate(avaliablePieces[piece], Player1SpawnLocation);
            player1HasPiece = true;
        }
        if (player2HasPiece == false)
        {
            //Want fixed ordering so declaring and updating seed.
            Random.InitState(player2Seed);
            player2Seed = Random.Range(0, int.MaxValue);
            int piece = player2Seed % pieces;

            Instantiate(avaliablePieces[piece], Player1SpawnLocation);

            player2HasPiece = true;
        }

        //Player 1
        //Rotate Object based on joystick
        //Translate Object based on joystick 2
        //Restrict Position of objects to over your island.
        //On collision New Piece
        player1.getInputVector();
        //Player 2
        //Rotate Object based on joystick
        //Translate Object based on joystick 2
        //Restrict Position of objects to over your island.
        //On collision New Piece
    }

    public void SpawnPlayerPiece1()
    {
        player1HasPiece = false;
    }

    public void SpawnPlayerPiece2()
    {
        player2HasPiece = false;
    }


}
