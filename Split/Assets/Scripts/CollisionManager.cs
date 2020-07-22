using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionManager : MonoBehaviour
{
    private Rigidbody rb;
    public Score score;
    public bool touched = false;

    public AudioSource tap;

    private void Update()
    {
        if (rb == null)
        {
            rb = this.gameObject.GetComponent<Rigidbody>();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        touched = true;

        if (collision.gameObject.tag == "Reverse")
        {
            score.score++;
            if (rb.velocity.x < 0)
            {
                rb.AddForce(-200, 300, 0);
            }
            else
            {
                rb.AddForce(200, 300, 0);
            }

            GameObject sunbed = GameObject.FindGameObjectWithTag("Sunbed");

            for (int i = 0; i < sunbed.transform.childCount; i++)
            {
                sunbed.transform.GetChild(i).gameObject.tag = "Used";
            }
            tap.Play();
        }

        else if (collision.gameObject.tag == "Left Column")
        {
            rb.AddForce(200, 300, 0);
            tap.Play();
        }
        else if (collision.gameObject.tag == "Right Column")
        {
            rb.AddForce(-200, 300, 0);
            tap.Play();
        }
        else if (collision.gameObject.tag == "Continue")
        {
            score.score++;
            if (rb.velocity.x < 0)
            {
                rb.AddForce(-250, 150, 0);
            }
            else
            {
                rb.AddForce(250, 150, 0);
            }

            GameObject sunbed = GameObject.FindGameObjectWithTag("Sunbed");

            for (int i = 0; i < sunbed.transform.childCount; i++)
            {
                sunbed.transform.GetChild(i).gameObject.tag = "Used";
            }

            tap.Play();
        }
    }
}
