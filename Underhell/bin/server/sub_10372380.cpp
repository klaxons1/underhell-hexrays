BOOL __thiscall sub_10372380(int this)
{
  int v2; // eax
  BOOL result; // eax

  result = 1;
  if ( (*(_BYTE *)(this + 4184) & 1) == 0
    && !sub_100697A0((_DWORD *)this, 53, 0)
    && !sub_100697A0((_DWORD *)this, 106, 0)
    && !sub_100697A0((_DWORD *)this, 58, 0) )
  {
    v2 = *(_DWORD *)(this + 2372);
    if ( v2 != 6 && v2 != 11 && *(_DWORD *)(this + 2124) )
      return 0;
  }
  return result;
}
