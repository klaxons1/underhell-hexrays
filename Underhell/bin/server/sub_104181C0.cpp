int __thiscall sub_104181C0(_DWORD **this)
{
  int result; // eax

  if ( this[4] )
    return (*(int (__thiscall **)(_DWORD *))(*this[4] + 20))(this[4]);
  return result;
}
