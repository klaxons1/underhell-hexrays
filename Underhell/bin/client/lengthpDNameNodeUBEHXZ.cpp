int __thiscall pDNameNode::length(pDNameNode *this)
{
  int (__thiscall ****v1)(_DWORD); // eax
  int (__thiscall ***v2)(_DWORD); // eax

  v1 = (int (__thiscall ****)(_DWORD))*((_DWORD *)this + 1);
  if ( v1 && (v2 = *v1) != 0 )
    return (**v2)(v2);
  else
    return 0;
}
