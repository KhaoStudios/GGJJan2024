using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FartPlayer : PlayerController
{
    public Transform PersonModelParent;

    FartManager fartManager;
    public int speed;             // speed
    private bool active;          // if it is active or not

    // Start is called before the first frame update
    void Start()
    {
        fartManager = GameObject.FindObjectOfType<FartManager>();
        if (fartManager == null)
        {
            Debug.LogError("NO FART MANAGER!!");
            return;
        }
        active = true;
    }

    public void ReplaceModel(GameObject newModel)
    {
        foreach (Transform child in PersonModelParent.transform)
        {
            Destroy(child.gameObject);
        }
        Instantiate(newModel, PersonModelParent);
    }

    public override void OnPrimaryButtonPressed()
    {
        fartManager.Fart();
    }

    // Update is called once per frame
    void Update()
    {
        // if active
        if(active)
        {
            // Get the unput vector and set it
            Vector2 move = inputVector;
            //transform.position += new Vector3(move.x, 0, move.y) * Time.deltaTime * speed;
            GetComponent<Rigidbody>().velocity = new Vector3(move.x, 0, move.y) * speed;
        }

    }
    // public function to stop movement
    public void Stop()
    {
        active = false;
        GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }


}
