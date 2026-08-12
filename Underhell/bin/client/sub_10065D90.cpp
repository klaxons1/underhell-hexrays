__int16 __thiscall sub_10065D90(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10410AAC & 1) == 0 )
  {
    dword_10410AAC |= 1u;
    dword_10410AA4 = -1;
    dword_10410AA8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10410AA8;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
