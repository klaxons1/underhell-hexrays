int __thiscall pairNode::getLastChar(pairNode *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 4))(*((_DWORD *)this + 2));
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 4))(*((_DWORD *)this + 1));
  return result;
}
