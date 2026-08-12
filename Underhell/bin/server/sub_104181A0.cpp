int __thiscall sub_104181A0(_DWORD **this)
{
  int result; // eax

  if ( this[4] )
    return (*(int (__thiscall **)(_DWORD *))(*this[4] + 16))(this[4]);
  return result;
}
