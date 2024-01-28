using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartCharacter : MonoBehaviour
{
    public Transform PersonModelParent;

    private bool active;    // if it is active
    public Vector3 target;  // the target position it is aiming towards
    public float waitTimer; // wait timer
    public ActionList act;  // action list

    // Minimum and maximum positions on map
    public float minimumX = -10.0f;
    public float minimumY = -6.0f;
    public float maximumX = 10.0f;
    public float maximumY = 6.0f;


    public void ReplaceModel(GameObject newModel)
    {
        foreach (Transform child in PersonModelParent.transform)
        {
            Destroy(child.gameObject);
        }
        Instantiate(newModel, PersonModelParent);
    }

    // Start is called before the first frame update
    private void Awake()
    {
        // set up action list
        act = new ActionList();
    }
    void Start()
    {
        
        active = true;
        // set a time to wait based on random range 50% of the time
        int rand = Random.Range(0, 2);
        if(rand == 0)
        {
            waitTimer = Random.Range(0.0f, 3f);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Return if inactive
        if(!active)
        {
            return;
        }
        // If you are waiting just return
        if(waitTimer>0)
        {
            waitTimer -= Time.deltaTime;
            return;
        }
        // Update timer
        act.Update(Time.deltaTime);

        // if the list is empty
        if(act.Empty())
        {
            // Get a new position and decide whether or not to wait. 
            Vector3 newPos = new Vector3(Random.Range(minimumX, maximumX), 2, Random.Range(minimumY, maximumY));
            act.Add(new Act.Move(newPos, gameObject, Random.Range(1.4f, 3.3f)));
            // 50% chance to wait
            int rand = Random.Range(0, 2);
            if (rand == 0)
            {
                waitTimer = Random.Range(0.0f, 1.5f);
            }
        }

    }
    private void OnCollisionEnter(Collision collision)
    {
        // If you collide with another character
        if(collision.gameObject.name.Contains("Fart"))
        {
            // Clear list
            act.Clear();

            // Choose random position and move after waiting for a bit
            Vector3 newPos = new Vector3(Random.Range(minimumX, maximumX), 2, Random.Range(minimumY, maximumY));
            act.Add(new Act.Move(newPos, gameObject, Random.Range(1.4f, 3.3f)));
            waitTimer = Random.Range(0.0f, 1.0f);

        }
    }
    public void Stop()
    {
        // Stop and limit velocity
        active = false;
        GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);

    }
}
