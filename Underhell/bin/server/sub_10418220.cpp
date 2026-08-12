int __thiscall sub_10418220(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 36))(this[1]);
  return result;
}
