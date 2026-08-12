int __thiscall sub_101E3A60(_DWORD **this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *, int))(*this[2] + 1232))(this[2], a2);
  return result;
}
