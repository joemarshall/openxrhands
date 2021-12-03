using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.OpenXR;
public class HandGetter : MonoBehaviour
{

    GameObject lhand,rhand;

    // Start is called before the first frame update
    void Start()
    {
    }

    public float rx,ry,rz;
    public Material mat;
    // Update is called once per frame
    void Update()
    {
        HandTrackingFeature hf=OpenXRSettings.Instance.GetFeature<HandTrackingFeature>();
        if(hf==null || hf.enabled==false)
        {
            print("You need to enable the openXR hand tracking support extension ");
        }
        
        if(lhand==null)
        {
            hf.GetHandMesh(HandTrackingFeature.Hand_Index.L,transform,mat,out lhand);
        }
        else
        {
            hf.ApplyHandJointsToMesh(HandTrackingFeature.Hand_Index.L,lhand,rx,ry,rz);
        }    
        if(rhand==null)
        {
            hf.GetHandMesh(HandTrackingFeature.Hand_Index.R,transform,mat,out rhand);            
        }else
        {
            hf.ApplyHandJointsToMesh(HandTrackingFeature.Hand_Index.R,rhand,rx,ry,rz);
        }
    }
}
