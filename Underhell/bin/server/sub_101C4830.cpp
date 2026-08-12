char __thiscall sub_101C4830(_BYTE *this, int a2)
{
  char result; // al

  if ( a2 )
  {
    result = 1;
    if ( (this[252] & 1) == 0 && (*(_BYTE *)(a2 + 252) & 1) == 0 )
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 376))(this, a2);
      return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 380))(this, a2);
    }
  }
  return result;
}
