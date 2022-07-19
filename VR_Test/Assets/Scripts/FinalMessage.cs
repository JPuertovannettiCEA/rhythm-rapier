using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class FinalMessage : MonoBehaviour
{
    [SerializeField]
    private TMP_Text _finalMessage;
    
    // Start is called before the first frame update
    void Start()
    {
        _finalMessage.text = "FINAL SCORE: " + ScoreManager._score;    
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
