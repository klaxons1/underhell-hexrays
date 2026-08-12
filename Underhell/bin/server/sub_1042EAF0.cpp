__int16 __thiscall sub_1042EAF0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106FF8E0 & 1) == 0 )
  {
    dword_106FF8E0 |= 1u;
    dword_106FF8D8 = -1;
    dword_106FF8DC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106FF8D8);
  else
    return *(_WORD *)(this[1] + 12 * a2 + 2);
}
