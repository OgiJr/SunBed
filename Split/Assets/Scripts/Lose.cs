using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lose : MonoBehaviour
{
    public AudioSource tap;
    public AudioSource loss;
    bool played = false;

    public GameObject reset;
    public GameObject ttpText;

    void Update()
    {
        if(this.gameObject.GetComponent<Rigidbody>().velocity == Vector3.zero && this.transform.position.y < 3)
        {
            LoseGame();
        }
        if (this.transform.position.x < -16 || this.transform.position.x > 16 || this.transform.position.y > 30 || this.transform.position.y < -3)
        {
            LoseGame();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Floor")
        {
            tap.Play();
            LoseGame();
        }
    }

    private void LoseGame()
    {
        Camera.main.gameObject.GetComponent<SpawnManager>().enabled = false;
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("Sunbed"))
        {
            Destroy(go);
        }
        Debug.Log("You lose");
        this.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
        if (played == false)
        {
            loss.Play();
            played = true;
        }

        reset.SetActive(true);
        ttpText.SetActive(true);
    }
}
