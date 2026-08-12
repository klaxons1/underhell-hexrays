__int16 __thiscall sub_10051980(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10692074 & 1) == 0 )
  {
    dword_10692074 |= 1u;
    dword_1069206C = -1;
    dword_10692070 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10692070;
  else
    return *(_WORD *)(this[1] + 12 * a2 + 4);
}
