using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Car : MonoBehaviour
{
    public float moveSpeed = 10f;
    Rigidbody myRb;

    private void Awake()
    {
        myRb = GetComponent<Rigidbody>();
    }

    public void DestroyAfterSeconds(float seconds)
    {
        StartCoroutine(IDestroyAfterSeconds(seconds));
    }

    IEnumerator IDestroyAfterSeconds(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        Destroy(this.gameObject);
    }

    private void Update()
    {
        
    }

    private void FixedUpdate()
    {
        myRb.transform.Translate(Vector3.forward * moveSpeed * Time.fixedDeltaTime, Space.Self);
    }
}
