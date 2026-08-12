__int16 __thiscall sub_10162D70(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106B4BB4 & 1) == 0 )
  {
    dword_106B4BB4 |= 1u;
    dword_106B4BAC = -1;
    dword_106B4BB0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106B4BAC);
  else
    return *(_WORD *)(this[1] + 12 * a2 + 2);
}
