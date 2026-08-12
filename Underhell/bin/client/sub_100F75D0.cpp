int __thiscall sub_100F75D0(_BYTE *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 && (this[312] & 1) == 0 && (*(_BYTE *)(a2 + 312) & 1) == 0 )
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 484))(this, a2);
  return result;
}
