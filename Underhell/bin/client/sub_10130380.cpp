int __thiscall sub_10130380(_DWORD **this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*this[1] + 912))(this[1], a2, a3, a4, a5);
  return result;
}
