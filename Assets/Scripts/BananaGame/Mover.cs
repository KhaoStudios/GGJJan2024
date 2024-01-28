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
    float TimeInBalance = 0;
    float TimeSinceKnocked;
    float TimeSinceLastBounce = 0;
    Vector3 ReadjustingBeginPos;

    private void Awake()
    {
        RB = GetComponent<Rigidbody>();
        Col = GetComponent<Collider>();
        PlayerStartHeight = transform.position.y;
    }

    void BeginTrippedState()
    {

        BananaUpright = false;
        TimeSinceKnocked = 0;
        RB.freezeRotation = false;
        RB.constraints = RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;

        RB.angularVelocity = Vector3.zero;
        RB.velocity = Vector3.zero;
        RB.AddTorque(new Vector3(-400, 0, 0));

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
        if (transform.position.y <= PlayerStartHeight && TimeSinceLastBounce > 0.25f)
        {
           RB.velocity = new Vector3(Vel.x, 20, Vel.z);
           RB.AddForce(new Vector3(5f, 10f, 0));
           TimeSinceLastBounce = 0;
           AkSoundEngine.PostEvent("bananaStep", this.gameObject);
        }
        else
        {
           RB.velocity = new Vector3(Vel.x, Vel.y - 2, Vel.z);
           TimeSinceLastBounce += Time.deltaTime;
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

            RB.velocity = new Vector3(inputVector.x * MoveSpeed, RB.velocity.y, inputVector.y * MoveSpeed);
            if (IsThereInput() == true)
            {
                Hop();
            }
        }
        else //banana is currently tripped
        {
   
            Vector3 Rotation = transform.rotation.eulerAngles;
   
            if (PlayerReajusting)
            {
                float ReadjustingDirection = -1;
                if (ReadjustingBeginPos.z - transform.position.z > 1.5f)
                {
                    ReadjustingDirection = 1;
                }
                Vector3 Spin = new Vector3(ReadjustingDirection * 5 * Mathf.Abs(inputVector.y), 0, 0);
                RB.AddTorque(Spin);
                float RotationTolerance = 20;
                if (Rotation.x <= RotationTolerance && Rotation.x >= -RotationTolerance)
                {
                    Debug.Log("In balance, time " + TimeInBalance);
                    if (TimeInBalance > 0.2f)
                    {
                        PlayerReajusting = false;
                        BananaUpright = true;
                        Rotation.x = 0;
                        transform.eulerAngles = Rotation;
                        AkSoundEngine.PostEvent("successDing", this.gameObject);
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
            if (other.gameObject.name.Contains("Car"))
            {
                AkSoundEngine.PostEvent("playerRunOver", this.gameObject);
                AkSoundEngine.PostEvent("carHonk", this.gameObject);

            }
            AkSoundEngine.PostEvent("playerSlip", this.gameObject);

            BeginTrippedState();
        }
    }
}