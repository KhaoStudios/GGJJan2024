using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : PlayerController //for banana game
{
    [SerializeField]
    private float MoveSpeed = 3f;

    Collider Col;
    private Rigidbody RB;
    private Vector3 moveDirection = Vector3.zero;
    bool BananaUpright = true;
    public float HoppingInterval = 0.5f;
    float PlayerStartHeight;
    bool PlayerReajusting = false;
    float TimeSinceTripped = 0;
    float TimeInBalance = 0;
    float TimeSinceKnocked;
    Vector3 ReadjustingBeginPos;

    private void Awake()
    {
        RB = GetComponent<Rigidbody>();
        Col = GetComponent<Collider>();
        PlayerStartHeight = transform.position.y;
    }

    void BeginTrippedState()
    {
        TimeSinceTripped = 0;
        BananaUpright = false;
        TimeSinceKnocked = 0;
    }
    bool IsThereInput()
    {
        float Range = 0.001f;
        if ((inputVector.x > Range || inputVector.x < -Range))
        {
            return true;
        }
        if ((inputVector.y > Range || inputVector.y < -Range))
        {
            return true;
        }
        return false;
    }
    void Hop()
    {
        Vector3 Vel = RB.velocity;
        float HeightModifier = 3.0f;
        if (transform.position.y <= PlayerStartHeight)
        {
            RB.velocity = new Vector3(Vel.x, 5 * HeightModifier, Vel.z);
        }
        else
        {
            RB.velocity = new Vector3(Vel.x, -1.5f * HeightModifier, Vel.z);
        }
    }

    void FixedUpdate()
    {

        if (BananaUpright)//banana is in the normal state
        {
            Col.isTrigger = false;
            RB.useGravity = true;
            RB.freezeRotation = true;
            RB.isKinematic = false;

            RB.velocity = new Vector3(inputVector.x * MoveSpeed, 0, inputVector.y * MoveSpeed);
            if (IsThereInput() == true)
            {
                Hop();
            }
        }
        else //banana is currently tripped
        {

            RB.freezeRotation = false;
            RB.constraints = RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
            Vector3 Rotation = transform.rotation.eulerAngles;

            if (PlayerReajusting)
            {
                float ReadjustingDirection = -1;
                if (ReadjustingBeginPos.z - transform.position.z > 1.5f)
                {
                    ReadjustingDirection = 1;
                }
                // RB.freezeRotation = true;
                Vector3 Spin = new Vector3(ReadjustingDirection * 5 * Mathf.Abs(inputVector.y), 0, 0);
                RB.AddTorque(Spin);
                //transform.Rotate(Spin);
                float RotationTolerance = 20;
                if (Rotation.x <= RotationTolerance && Rotation.x >= -RotationTolerance)
                {
                    Debug.Log("In balance, time " + TimeInBalance);
                    if (TimeInBalance > 0.2f)
                    {
                        PlayerReajusting = false;
                        BananaUpright = true;
                        transform.eulerAngles = Vector3.zero;
                    }
                    TimeInBalance += Time.deltaTime;
                }
                else
                {
                    Debug.Log("Not Balanced");
                    TimeInBalance = 0;
                }
            }
            else if (Rotation.x >= 90.0f || Rotation.x <= -90.0f || TimeSinceKnocked > 4.0f)
            {
                RB.angularVelocity = Vector3.zero;
                RB.velocity = Vector3.zero;
                PlayerReajusting = true;
                ReadjustingBeginPos = transform.position;
            }
            else
            {
                TimeSinceKnocked += Time.deltaTime;
            }

        }
    }

    public override void OnPrimaryButtonPressed()
    {
        Debug.Log("Mover - Pressed primary button", this.gameObject);
    }

    public override void OnSecondaryButtonPressed()
    {
        Debug.Log("Mover - Pressed secondary button");
    }


    public void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("TripObject"))
        {
            BeginTrippedState();
        }
    }
}