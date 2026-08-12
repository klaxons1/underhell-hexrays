int __thiscall sub_10130440(_DWORD **this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*this[1] + 924))(this[1], a2, a3, a4, a5, a6);
  return result;
}
