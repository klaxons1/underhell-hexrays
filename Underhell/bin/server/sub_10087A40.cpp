__int16 __thiscall sub_10087A40(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106936D4 & 1) == 0 )
  {
    dword_106936D4 |= 1u;
    dword_106936CC = -1;
    dword_106936D0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106936CC);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
