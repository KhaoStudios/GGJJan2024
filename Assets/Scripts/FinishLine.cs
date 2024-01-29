using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLine : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnTriggerEnter(Collider other)
    {
        AkSoundEngine.PostEvent("removeAllDrivingCars", this.gameObject);
        if (other.gameObject.name.Equals("Player1"))
        {
            GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
            Destroy(this);
        }
        if (other.gameObject.name.Equals("Player2"))
        {
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(this);
        }
    }
}
