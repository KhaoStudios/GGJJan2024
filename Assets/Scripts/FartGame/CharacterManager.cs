using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterManager : MonoBehaviour
{
    public GameObject character;
    public GameObject player;
    public int number;
    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < number; i++)
        {
            Vector3 newPos = new Vector3(Random.Range(-10.0f, 10.0f), 2, Random.Range(-6.0f, 6.0f));
            GameObject gam = Instantiate(character, newPos, Quaternion.Euler(30, 0, 0));
            gam.name = "FartCharacter" + i.ToString();
            GameObject.Find("FartCharacter" + i.ToString()).GetComponent<Renderer>().material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));

        }
        Vector3 newPos2 = new Vector3(Random.Range(-10.0f, 10.0f), 2, Random.Range(-6.0f, 6.0f));
        GameObject gam2 = Instantiate(player, newPos2, Quaternion.Euler(30, 0, 0));
        gam2.GetComponent<Renderer>().material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));

    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
