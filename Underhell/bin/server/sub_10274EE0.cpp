__int16 __thiscall sub_10274EE0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106CFE44 & 1) == 0 )
  {
    dword_106CFE44 |= 1u;
    dword_106CFE3C = -1;
    dword_106CFE40 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106CFE3C);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
