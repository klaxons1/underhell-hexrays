int __thiscall sub_101C4800(_BYTE *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 && (this[252] & 1) == 0 && (*(_BYTE *)(a2 + 252) & 1) == 0 )
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 380))(this, a2);
  return result;
}
