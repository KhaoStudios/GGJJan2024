using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Car : MonoBehaviour
{
    public float moveSpeed = 10f;
    Rigidbody myRb;
    uint SoundID = 0;
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
        SoundID = AkSoundEngine.PostEvent("carGone", this.gameObject);
        Destroy(this.gameObject);
    }

    private void Update()
    {
        if (SoundID == 0)
        {
            SoundID = AkSoundEngine.PostEvent("carDriving", this.gameObject);
        }
    }

    private void FixedUpdate()
    {
        myRb.transform.Translate(Vector3.forward * moveSpeed * Time.fixedDeltaTime, Space.Self);
    }
}
