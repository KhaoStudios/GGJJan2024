using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceManager : MonoBehaviour
{
    public ActionList actionList;
    public float height;
    public float radius;

    public PlayerController player1;
    public PlayerController player2;

    public float speed;
    public float angularSpeed;


    bool player1HasPiece = false;
    bool player2HasPiece = false;

    public Transform Player1SpawnLocation;
    public Transform Player2SpawnLocation;

    public List<GameObject> avaliablePieces;

    private int player1Seed;
    private int player2Seed;

    private GameObject player1Piece;
    private GameObject player2Piece;

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
        if(player1Piece && (player1Piece.GetComponent<DetectCollisions>().getCollided() || player1Piece.transform.position.y < 0))
        {
            player1HasPiece = false;
        }
        if (player1Piece && (player2Piece.GetComponent<DetectCollisions>().getCollided() || player1Piece.transform.position.y < 0))
        {
            player2HasPiece = false;
        }

        actionList.Update(Time.deltaTime);
        if (player1HasPiece == false)
        {
            //Want fixed ordering so declaring and updating seed.
            Random.InitState(player1Seed);
            player1Seed = Random.Range(0 , int.MaxValue);
            int piece = player1Seed % pieces;

            player1Piece = Instantiate(avaliablePieces[piece]);
            player1Piece.transform.position = Player1SpawnLocation.position + new Vector3(radius * Random.Range(-1.0f, 1.0f), 0, radius * Random.Range(-1.0f, 1.0f));
            player1HasPiece = true;
        }
        if (player2HasPiece == false)
        {
            //Want fixed ordering so declaring and updating seed.
            Random.InitState(player2Seed);
            player2Seed = Random.Range(0, int.MaxValue);
            int piece = player2Seed % pieces;

            player2Piece = Instantiate(avaliablePieces[piece]);
            player2Piece.transform.position = Player2SpawnLocation.position + new Vector3(radius * Random.Range(-1.0f, 1.0f), 0, radius * Random.Range(-1.0f, 1.0f));
            player2HasPiece = true;
        }

        //Player 1
        //Rotate Object based on joystick
        //Translate Object based on joystick 2
        //Restrict Position of objects to over your island.
        //On collision New Piece
        Vector2 translate1 = player1.GetInputVector() * speed * Time.deltaTime;
        Vector2 rotation1 = player1.GetSecondaryInputVector() * angularSpeed * Time.deltaTime;

        player1Piece.transform.position += new  Vector3(translate1.x, 0, translate1.y);
        //Player 2
        //Rotate Object based on joystick
        //Translate Object based on joystick 2
        //Restrict Position of objects to over your island.
        //On collision New Piece
        Vector2 translate2 = player2.GetInputVector() * speed * Time.deltaTime;
        Vector2 rotation2 = player2.GetSecondaryInputVector() * angularSpeed * Time.deltaTime;

        player2Piece.transform.position += new Vector3(translate2.x, 0, translate2.y);

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
