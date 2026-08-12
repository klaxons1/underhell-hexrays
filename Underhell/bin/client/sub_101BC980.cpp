int __thiscall sub_101BC980(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 24))(this[1]);
  return result;
}
