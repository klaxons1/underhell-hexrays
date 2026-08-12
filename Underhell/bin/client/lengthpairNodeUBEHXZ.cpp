int __thiscall pairNode::length(pairNode *this)
{
  int (__thiscall ***v2)(_DWORD); // edi
  int v3; // ebx

  if ( *((int *)this + 3) < 0 )
  {
    v2 = (int (__thiscall ***)(_DWORD))*((_DWORD *)this + 1);
    v3 = (***((int (__thiscall ****)(_DWORD))this + 2))(*((_DWORD *)this + 2));
    *((_DWORD *)this + 3) = (**v2)(v2) + v3;
  }
  return *((_DWORD *)this + 3);
}
