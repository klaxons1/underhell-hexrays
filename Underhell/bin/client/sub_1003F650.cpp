__int16 __thiscall sub_1003F650(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10407308 & 1) == 0 )
  {
    dword_10407308 |= 1u;
    dword_10407300 = -1;
    dword_10407304 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_10407300);
  else
    return *(_WORD *)(this[1] + 20 * a2 + 2);
}
