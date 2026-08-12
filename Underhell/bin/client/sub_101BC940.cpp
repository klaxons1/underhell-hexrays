int __thiscall sub_101BC940(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 16))(this[1]);
  return result;
}
