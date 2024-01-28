using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FartPlayer : PlayerController
{
    public Transform PersonModelParent;

    FartManager fartManager;
    public int speed;             // speed
    private bool active;          // if it is active or not

    public GameObject exclamationPoint;


    public void ToggleExclamation(bool enabled)
    {
        exclamationPoint.SetActive(enabled);
    }

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
            //transform.position += new Vector3(move.x, 0, move.y) * Time.deltaTime * speed;

            Vector3 moveDirection = new Vector3(inputVector.x, 0, inputVector.y);
            GetComponent<Rigidbody>().velocity = moveDirection * speed;

            if (moveDirection !=  Vector3.zero)
            {
                transform.rotation = Quaternion.LookRotation(-moveDirection);
            }
        }

    }
    // public function to stop movement
    public void Stop()
    {
        active = false;
        GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
    }


}
