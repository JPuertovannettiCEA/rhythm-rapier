using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rapier : MonoBehaviour
{
    public LayerMask Layer;
    private Vector3 _previousPos;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        RaycastHit hit;
        if(Physics.Raycast(transform.position, transform.forward, out hit, 1, Layer))
        {
            //Checks if the player hit in the right direction
            if(Vector3.Angle(transform.position-_previousPos,hit.transform.up)>130)
            {
                //Adds score
                ScoreManager._score++;
                Destroy(hit.transform.gameObject);
            }
        }
        _previousPos = transform.position;
        
    }
}
