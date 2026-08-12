__int16 __thiscall sub_1005E0D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106923D4 & 1) == 0 )
  {
    dword_106923D4 |= 1u;
    dword_106923CC = -1;
    dword_106923D0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106923CC);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
