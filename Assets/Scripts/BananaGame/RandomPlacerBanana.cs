using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using static UnityEditor.PlayerSettings;


public class RandomPlacerBanana : MonoBehaviour
{
    public GameObject ObstaclePrefab;

    // Start is called before the first frame update
    void Start()
    {
        string[] ModelNames = { "Peg_Dress_Long_BlackHair", "Peg_Dress_Long_BrownHair", "Peg_Dress_Long_GreyHair", "Peg_Dress_Long_OrangeHair", "Peg_Dress_Long_YellowHair", "Peg_Dress_Short_BlackHair", "Peg_Dress_Short_BrownHair", "Peg_Dress_Short_GreyHair", "Peg_Dress_Short_OrangeHair", "Peg_Dress_Short_YellowHair", "Peg_Shirt_Long_BlondeHair", "Peg_Shirt_Long_LightBrownHair", "Peg_Shirt_Long_RedBrownHair", "Peg_Shirt_Long_YellowHair", "Peg_Shirt_Short_BlackHair", "Peg_Shirt_Short_BrownHair", "Peg_Shirt_Short_BrownHair2", "Peg_Shirt_Short_GreyHair", "Peg_Shirt_Short_OrangeHair", "Peg_Shirt_Short_YellowHair" };
        int NumModels = ModelNames.Length;

        int NumBananas = 15;
        for (int i = 0; i < NumBananas; i++)
        {
            Vector3 Pos = new Vector3(Random.Range(-20.0f, 20.0f), 0, Random.Range(-8.0f, 8.0f));
            Pos.y = 0.35f;
            
            int Type = Random.Range(0, NumModels);
            GameObject Instance = Instantiate(ObstaclePrefab, Pos, Quaternion.identity);
            Instance.transform.Rotate(new Vector3(0, Random.Range(-20, 20), 0));
            GameObject PersonModel = Instantiate((UnityEngine.GameObject)Resources.Load(ModelNames[Type]), Pos, Quaternion.identity);
            PersonModel.transform.SetParent(Instance.transform);
            PersonModel.transform.localPosition = new Vector3(0, 0, -1.57f);
            PersonModel.transform.localEulerAngles = new Vector3(-90, 0, 180);
            PersonModel.transform.localScale = new Vector3(55, 55, 55);

        }


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
