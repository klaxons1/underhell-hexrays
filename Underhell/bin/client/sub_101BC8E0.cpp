int __thiscall sub_101BC8E0(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 4))(this[1]);
  return result;
}
