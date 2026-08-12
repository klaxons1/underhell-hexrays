bool __thiscall sub_100E32D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104356A4 & 1) == 0 )
  {
    dword_104356A4 |= 1u;
    dword_1043569C = -1;
    dword_104356A0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_104356A0) == 1;
  else
    return *(_WORD *)(this[1] + 20 * a2 + 6) == 1;
}
