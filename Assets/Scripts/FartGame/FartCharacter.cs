using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartCharacter : MonoBehaviour
{
    private bool active;
    public Vector3 target;
    public float waitTimer;
    public ActionList act;

    // Start is called before the first frame update
    void Start()
    {
        act = new ActionList();
        int rand = Random.Range(0, 2);
        if(rand == 0)
        {
            waitTimer = Random.Range(0.0f, 3f);

        }
    }

    // Update is called once per frame
    void Update()
    {
        act.Update(Time.deltaTime);
        if(act.Empty())
        {
            Vector3 newPos = new Vector3(Random.Range(-10.0f, 10.0f), 2, Random.Range(-6.0f, 6.0f));
            act.Add(new Act.Move(newPos, gameObject, Random.Range(.9f, 3.3f)));
        }
    }
    public void Stop()
    {
        active = false;
    }
}
