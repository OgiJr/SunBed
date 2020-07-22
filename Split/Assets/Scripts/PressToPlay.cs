using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PressToPlay : MonoBehaviour
{
    public GameObject player;

    void Start()
    {
        player.GetComponent<Rigidbody>().useGravity = false;
    }

    public void Play()
    {
        player.GetComponent<Rigidbody>().useGravity = true;
        Destroy(this.gameObject);
    }
}
