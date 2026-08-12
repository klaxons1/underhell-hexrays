char __thiscall sub_100F7600(_BYTE *this, int a2)
{
  char result; // al

  if ( a2 )
  {
    result = 1;
    if ( (this[312] & 1) == 0 && (*(_BYTE *)(a2 + 312) & 1) == 0 )
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 480))(this, a2);
      return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 484))(this, a2);
    }
  }
  return result;
}
