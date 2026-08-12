__int16 __thiscall sub_100942D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1069399C & 1) == 0 )
  {
    dword_1069399C |= 1u;
    dword_10693994 = -1;
    dword_10693998 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10693994;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
