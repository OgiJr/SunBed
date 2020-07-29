using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroySelfInvoke : MonoBehaviour
{
    bool called = false;
    void Update()
    {
        if (called == false)
        {
            Invoke("DestroySelf", 4);
            called = true;
        }       
    }

    void DestroySelf()
    {
        Destroy(this.gameObject);
    }
}
