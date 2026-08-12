int __thiscall sub_101BC900(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 8))(this[1]);
  return result;
}
