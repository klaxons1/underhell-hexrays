__int16 __thiscall sub_10105CE0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10436730 & 1) == 0 )
  {
    dword_10436730 |= 1u;
    dword_10436728 = -1;
    dword_1043672C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1043672C;
  else
    return *(_WORD *)(this[1] + 44 * a2 + 4);
}
