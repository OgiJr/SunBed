using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour
{
    private bool tutorial;
    public Text text;
    bool end = false;
    bool touched;

    void OnCollisionExit(){
Wait();    }

    void Start()
    {
            if(PlayerPrefs.GetInt("HighScore") < 200){
              tutorial = true;
            }
    }

    void Update()
    {
            if(touched == true){
      if(tutorial == true){
          text.gameObject.SetActive(true);
          end = true;
      }}

      if(Input.GetMouseButtonDown(0) && end == true || Input.touchCount > 0 && end == true){
        tutorial = false;
        text.gameObject.SetActive(false);
      }
    }

    void Wait(){
      touched = true;
    }
}
