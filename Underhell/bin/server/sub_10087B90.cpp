__int16 __thiscall sub_10087B90(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106936E0 & 1) == 0 )
  {
    dword_106936E0 |= 1u;
    dword_106936D8 = -1;
    dword_106936DC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106936D8;
  else
    return *(_WORD *)(this[1] + 12 * a2);
}
