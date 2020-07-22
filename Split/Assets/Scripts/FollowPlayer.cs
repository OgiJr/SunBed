using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    public Transform player;

    public float speed = 6;
    public Vector3 offset;

    private void FixedUpdate()
    {
        Vector3 desiredPos = player.position + offset;
        Vector3 smoothedPos = Vector3.Lerp(transform.position, desiredPos, speed * Time.deltaTime);
        transform.position = smoothedPos;
        transform.LookAt(player);
    }
}
