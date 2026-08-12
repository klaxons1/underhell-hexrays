bool __thiscall sub_1016C840(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106B5978 & 1) == 0 )
  {
    dword_106B5978 |= 1u;
    dword_106B5970 = -1;
    dword_106B5974 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106B5974) == 1;
  else
    return *(_WORD *)(this[1] + 20 * a2 + 6) == 1;
}
