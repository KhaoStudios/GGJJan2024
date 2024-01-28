using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartEffect : MonoBehaviour
{
    //how fast scale increases
    public float ScaleMultipler = 1.1f;
    //scale of how big the fart will be
    public float ScaleHitbox = 10f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Multiply localScale with time.deltatime
        transform.localScale *= 1 + (ScaleMultipler * Time.deltaTime);

        // if it is big enough, destroy it
        if (transform.localScale.x > ScaleHitbox)
        {
            Destroy(gameObject);

        }
    }
}
