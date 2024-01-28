using System.Collections;
using System.Collections.Generic;
using Act;
using UnityEngine;

public class PegHopperScript : MonoBehaviour
{
    private ActionList al;
    private float timer;

    [SerializeField] private Vector3 upPos;
    [SerializeField] private Vector3 downPos;
    // Start is called before the first frame update
    void Start()
    {
        al = new ActionList();
        timer = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (timer <= 0.0f)
        {
            Jump();
        }
        al.Update(Time.deltaTime);

        timer -= Time.deltaTime;
    }

    void Jump()
    {
        al.Add(new Move(upPos, this.gameObject, 0.5f,0.0f,true,Action.Group.None,Action.EaseType.Cubic));
        al.Add(new Move(downPos, this.gameObject, 0.5f,0.0f,false,Action.Group.None,Action.EaseType.Cubic));
        timer += 1.0f + Random.Range(0.3f, 1.75f);
    }
}
