using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TTP : MonoBehaviour
{
    void Update()
    {
        if(Input.GetMouseButton(0) || Input.touchCount > 0)
        {
            this.gameObject.SetActive(false);
        }       
    }
}
