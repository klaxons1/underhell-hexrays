__int16 __thiscall sub_100533E0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10692074 & 1) == 0 )
  {
    dword_10692074 |= 1u;
    dword_1069206C = -1;
    dword_10692070 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1069206C);
  else
    return *(_WORD *)(this[1] + 12 * a2 + 2);
}
