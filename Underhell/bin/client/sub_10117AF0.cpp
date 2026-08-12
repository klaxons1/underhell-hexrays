int __thiscall sub_10117AF0(_DWORD **this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( a2 != a3 )
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this[1] + 4))(this[1], a2, a3);
  return result;
}
