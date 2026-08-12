int __thiscall sub_10418140(_DWORD **this)
{
  int result; // eax

  if ( this[4] )
    return (*(int (__thiscall **)(_DWORD *))(*this[4] + 4))(this[4]);
  return result;
}
