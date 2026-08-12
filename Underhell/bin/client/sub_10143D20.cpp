__int16 __thiscall sub_10143D20(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1043C8C0 & 1) == 0 )
  {
    dword_1043C8C0 |= 1u;
    dword_1043C8B8 = -1;
    dword_1043C8BC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1043C8B8);
  else
    return *(_WORD *)(this[1] + 12 * a2 + 2);
}
