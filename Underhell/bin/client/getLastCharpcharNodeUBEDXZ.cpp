char __thiscall pcharNode::getLastChar(pcharNode *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 2);
  if ( v1 )
    return *(_BYTE *)(*((_DWORD *)this + 1) + v1 - 1);
  else
    return 0;
}
