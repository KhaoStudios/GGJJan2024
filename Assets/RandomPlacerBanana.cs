using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.PlayerSettings;


public class RandomPlacerBanana : MonoBehaviour
{
    public GameObject ObstaclePrefab;
    // Start is called before the first frame update
    void Start()
    {
        int NumBananas = 10;
        for (int i = 0; i < NumBananas; i++)
        {
            Vector3 Pos = new Vector3(Random.Range(-25, 25), 0, Random.Range(-10, 10));
            Pos.y = 0.25f;
            Instantiate(ObstaclePrefab, Pos, Quaternion.identity);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
