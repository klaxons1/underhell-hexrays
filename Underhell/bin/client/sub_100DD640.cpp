DNameNode *sub_100DD640()
{
  DNameNode *v0; // eax
  DNameNode *v1; // esi

  v0 = (DNameNode *)sub_100DDA40(28);
  v1 = v0;
  if ( !v0 )
    return 0;
  DNameNode::DNameNode(v0);
  *(_DWORD *)v1 = &CTextureTransformProxy::`vftable';
  return v1;
}
