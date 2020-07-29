using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lose : MonoBehaviour
{
    public AudioSource tap;
    public AudioSource loss;
    public bool played = false;

    public GameObject ttpText;
    public GameObject tfr;

    bool lost = false;
    public Score score;

    void Start(){
      TinySauce.OnGameStarted();
    }

    void Update()
    {
      if(lost == false){
        if(this.gameObject.GetComponent<Rigidbody>().velocity == Vector3.zero && this.transform.position.y < 3)
        {
            LoseGame();
            lost = true;
        }
        if (this.transform.position.x < -16 || this.transform.position.x > 16 || this.transform.position.y > 50 || this.transform.position.y < -3)
        {
            LoseGame();
            lost = true;
        }
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

    public GameObject spawnManager;
    public GameObject tapNow;

    public void LoseGame()
    {
        TinySauce.OnGameFinished(score.score);
        Time.timeScale = 1;

        if(tfr.activeSelf == true)
        {
            tfr.SetActive(false);
        }

        spawnManager.GetComponent<SpawnManager>().enabled = false;

        this.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;

        if (played == false)
        {
            loss.Play();
            played = true;
        }

        tapNow.SetActive(false);
        this.gameObject.GetComponent<ResetScript>().enabled = true;
        ttpText.SetActive(true);
    }
}
