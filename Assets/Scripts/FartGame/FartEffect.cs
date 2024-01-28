using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartEffect : MonoBehaviour
{
    //how fast scale increases
    public float ScaleMultipler = 1.1f;
    //scale of the explosion hitbox (main part of the explosion)
    public float ScaleHitbox = 10f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(transform.localScale);
        //Debug.Log(Time.deltaTime);
        transform.localScale *= 1+ (ScaleMultipler*Time.deltaTime);

        if (transform.localScale.x > ScaleHitbox)
        {
            Destroy(gameObject);

        }
    }
}
