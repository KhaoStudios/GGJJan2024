using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartSelector : MonoBehaviour
{
    public PlayerController play;
    public int speed;
    public bool touching;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        transform.position += new Vector3(moveHorizontal, 0, moveVertical) * Time.deltaTime * speed;

        if(touching == false)
        {
            GetComponent<Renderer>().material.color = new Color(1, 1, 1);
        }
        else
        {
            GetComponent<Renderer>().material.color = new Color(1, 0, 0);
        }

    }
    private void OnCollisionStay(Collision collision)
    {
        if(collision.gameObject.name.Contains("Fart"))
        {
            GetComponent<Renderer>().material.color = new Color(1, 0, 0);
            if(Input.GetKeyDown(KeyCode.Space))
            {
                if(collision.gameObject.name.Contains("Player"))
                {
                    GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
                }
            }
        }
        else
        {
            GetComponent<Renderer>().material.color = new Color(0, 0, 0);

        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name.Contains("Fart"))
        {
            touching = true;
            if (Input.GetKeyDown(KeyCode.Space))
            {
                if (other.gameObject.name.Contains("Player"))
                {
                    GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
                    Destroy(gameObject);
                }
                else
                {
                    GameManager.Instance.StartNextMinigame(GameManager.players.Player2) ;

                }
            }
        }
        else
        {


        }
    }
    private void OnTriggerExit(Collider other)
    {
        touching = false;
    }
}
