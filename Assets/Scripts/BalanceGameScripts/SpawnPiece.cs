using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Act;
public class SpawnPiece : Action
{
    private GameObject m_piece;
    private Transform m_pieceTransform;
    public SpawnPiece(GameObject templatePiece, Transform pieceTransform, float dur = 0,  float delay = 0, bool blocking = false, Group group = Group.None, EaseType ease = EaseType.Linear):
        base(dur, delay, blocking, group, ease)
    {
        m_pieceTransform = pieceTransform;
        m_piece = templatePiece;
    }
    public override bool Execute(float deltTime)
    {
        if(PercentDone == 1)
        {
            GameObject.Instantiate(m_piece, m_pieceTransform);
            return true;
        }
        return false;
    }
}
