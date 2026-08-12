int __thiscall sub_101303E0(_DWORD **this, int a2)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this[1] + 924))(this[1], 255, 255, 255, 255, a2);
  return result;
}
