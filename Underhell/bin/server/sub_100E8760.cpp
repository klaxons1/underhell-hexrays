int __thiscall sub_100E8760(void *this, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 244))(this, a2);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 248))(this, a2, a3, a4);
  return result;
}
