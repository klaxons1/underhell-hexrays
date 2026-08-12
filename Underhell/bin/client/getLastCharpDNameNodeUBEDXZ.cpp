char __thiscall pDNameNode::getLastChar(pDNameNode *this)
{
  int *v1; // eax
  int v2; // eax

  v1 = (int *)*((_DWORD *)this + 1);
  if ( v1 && (v2 = *v1) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  else
    return 0;
}
