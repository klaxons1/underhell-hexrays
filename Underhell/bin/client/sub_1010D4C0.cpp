DNameNode *sub_1010D4C0()
{
  DNameNode *v0; // eax
  DNameNode *v1; // esi

  v0 = (DNameNode *)sub_100DDA40(16);
  v1 = v0;
  if ( !v0 )
    return 0;
  DNameNode::DNameNode(v0);
  *(_DWORD *)v1 = &CPlayerPositionProxy::`vftable';
  return v1;
}
