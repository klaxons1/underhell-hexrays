int __thiscall sub_101A00E0(_DWORD **this)
{
  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 96))(this[1]);
  if ( this[2] )
    return (*(int (__thiscall **)(_DWORD *))(*this[2] + 96))(this[2]);
  return 0;
}
