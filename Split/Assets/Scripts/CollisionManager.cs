using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionManager : MonoBehaviour
{
    private Rigidbody rb;
    public Score score;
    public bool touched = true;

    public AudioSource tap;

    private int minimumKillStreak = 1250;
    public GameObject TFR;

    public Lose lose;

    private void Update()
    {
        if (rb == null)
        {
            rb = this.gameObject.GetComponent<Rigidbody>();
        }

        if(score.score > minimumKillStreak && lose.played == false)
        {
            TFR.SetActive(true);

            touched = false;

            if(Input.touchCount > 1 && Input.GetTouch(0).phase == TouchPhase.Ended || Input.GetMouseButtonUp(0))
            {
                rb.velocity = new Vector3(rb.velocity.x, 0, rb.velocity.z);
                rb.AddForce(0, 500, 0);
                Invoke("Remove", 0.1f);
                minimumKillStreak += 1250;
                touched = true;
            }
        }
    }

    private void Remove()
    {
        TFR.SetActive(false);
    }

    private void OnCollisionEnter(Collision collision)
    {
        touched = true;

        if (collision.gameObject.tag == "Reverse")
        {
            score.score+= 100;
            Time.timeScale += 0.02f;
            if (rb.velocity.x < 0)
            {
                rb.AddForce(-300, 350, 0);
            }
            else
            {
                rb.AddForce(300, 350, 0);
            }

            GameObject[] sunbeds = GameObject.FindGameObjectsWithTag("Sunbed");

            foreach (GameObject sunbed in sunbeds)
            {
                for (int i = 0; i < sunbed.transform.childCount; i++)
                {
                    sunbed.transform.GetChild(i).gameObject.tag = "Used";
                }
            }
            tap.Play();
        }

        else if (collision.gameObject.tag == "Left Column" & Time.timeScale != 1)
        {
            score.score += 50;
            rb.AddForce(300, 350, 0);
            tap.Play();
        }
        else if (collision.gameObject.tag == "Right Column" && Time.timeScale != 1)
        {
            score.score += 50;
            rb.AddForce(-300, 350, 0);
            tap.Play();
        }
        else if (collision.gameObject.tag == "Continue")
        {
            Time.timeScale += 0.02f;
            score.score += 100;

            if (rb.velocity.x < 0)
            {
                rb.AddForce(-350, 230, 0);
            }
            else
            {
                rb.AddForce(350, 230, 0);
            }

            GameObject[] sunbeds = GameObject.FindGameObjectsWithTag("Sunbed");

            foreach (GameObject sunbed in sunbeds)
            {
                for (int i = 0; i < sunbed.transform.childCount; i++)
                {
                    sunbed.transform.GetChild(i).gameObject.tag = "Used";
                }
            }

            tap.Play();
        }
    }
}
