using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterManager : MonoBehaviour
{
    public GameObject CharacterPrefab; // The npcs on the map
    public GameObject PlayerCharacter;    // The character being controlled
    public int number;           // number of npcs spawned

    // Minimum and maximum positions on map
    public float minimumX = -10.0f;
    public float minimumY = -6.0f;
    public float maximumX = 10.0f;
    public float maximumY = 6.0f;


    // Start is called before the first frame update
    void Start()
    {
        // for each npc
        for (int i = 0; i < number; i++)
        {
            // Find new random position
            Vector3 newPos = new Vector3(Random.Range(minimumX, maximumX), 2, Random.Range(minimumY, maximumY));
            // Instantiate it
            GameObject gam = Instantiate(CharacterPrefab, newPos, Quaternion.Euler(30, 0, 0));
            // Give it a distinct name for debug purposes and change its color
            gam.name = "FartCharacter" + i.ToString();
            GameObject.Find("FartCharacter" + i.ToString()).GetComponent<Renderer>().material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));

        }

        // Place the position of the player farter in the map and give it a color
        Vector3 newPos2 = new Vector3(Random.Range(minimumX, maximumX), 2, Random.Range(minimumY, maximumY));

        PlayerCharacter.transform.position = newPos2;
        PlayerCharacter.transform.rotation = Quaternion.Euler(30, 0, 0);
        PlayerCharacter.GetComponent<Renderer>().material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));

    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
