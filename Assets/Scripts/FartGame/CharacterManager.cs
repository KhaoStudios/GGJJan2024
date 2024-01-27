using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterManager : MonoBehaviour
{
    public GameObject character;
    public int number;
    // Start is called before the first frame update
    void Start()
    {
        for(int i= 0; i<number;i++)
        {
            Vector3 newPos = new Vector3(Random.Range(-10.0f, 10.0f), 2, Random.Range(-6.0f, 6.0f));
            Instantiate(character, newPos, Quaternion.identity);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
