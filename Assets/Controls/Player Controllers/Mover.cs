using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : PlayerController
{
    [SerializeField]
    private float MoveSpeed = 3f;

    private CharacterController controller;

    private Vector3 moveDirection = Vector3.zero;

    private void Awake()
    {
        controller = GetComponent<CharacterController>();
    }

    void Update()
    {
        moveDirection = new Vector3(inputVector.x, 0, inputVector.y);
        moveDirection = transform.TransformDirection(moveDirection);
        moveDirection *= MoveSpeed;

        controller.Move(moveDirection * Time.deltaTime);
    }

    public override void OnPrimaryButtonPressed()
    {
        Debug.Log("Mover - Pressed primary button", this.gameObject);
    }

    public override void OnSecondaryButtonPressed()
    {
        Debug.Log("Mover - Pressed secondary button");
    }
}