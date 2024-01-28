using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.PlayerSettings;


public class RandomPlacerBanana : MonoBehaviour
{
    public GameObject ObstaclePrefab;
    public GameObject ObstaclePrefab1;
    public GameObject ObstaclePrefab2;
    public GameObject ObstaclePrefab3;
    public GameObject ObstaclePrefab4;
    public GameObject ObstaclePrefab5;
    public GameObject ObstaclePrefab6;
    public GameObject ObstaclePrefab7;
    public GameObject ObstaclePrefab8;
    public GameObject ObstaclePrefab9;



    // Start is called before the first frame update
    void Start()
    {
        int NumBananas = 15;
        for (int i = 0; i < NumBananas; i++)
        {
            Vector3 Pos = new Vector3(Random.Range(-20, 20), 0, Random.Range(-8, 8));
            Pos.y = 0.35f;
            GameObject PrefabOfChoice = ObstaclePrefab;
            int Type = Random.Range(0, 10);
            switch (Type)
            {
                case 0:
                    PrefabOfChoice = ObstaclePrefab;
                    break;
                case 1:
                    PrefabOfChoice = ObstaclePrefab1;
                    break;
                case 2:
                    PrefabOfChoice = ObstaclePrefab2;
                    break;
                case 3:
                    PrefabOfChoice = ObstaclePrefab3;
                    break;
                case 4:
                    PrefabOfChoice = ObstaclePrefab4;
                    break;
                case 5:
                    PrefabOfChoice = ObstaclePrefab5;
                    break;
                case 6:
                    PrefabOfChoice = ObstaclePrefab6;
                    break;
                case 7:
                    PrefabOfChoice = ObstaclePrefab7;
                    break;
                case 8:
                    PrefabOfChoice = ObstaclePrefab8;
                    break;
                case 9:
                    PrefabOfChoice = ObstaclePrefab9;
                    break;
            }
            GameObject Instance = Instantiate(PrefabOfChoice, Pos, Quaternion.identity);
            Instance.transform.Rotate(new Vector3(0, Random.Range(-20, 20), 0));
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
