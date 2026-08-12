int __thiscall sub_101BC960(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 20))(this[1]);
  return result;
}
