DNameNode *sub_1010D5F0()
{
  DNameNode *v0; // eax
  DNameNode *v1; // esi

  v0 = (DNameNode *)sub_100DDA40(24);
  v1 = v0;
  if ( !v0 )
    return 0;
  DNameNode::DNameNode(v0);
  *(_DWORD *)v1 = &CEntityRandomProxy::`vftable';
  return v1;
}
