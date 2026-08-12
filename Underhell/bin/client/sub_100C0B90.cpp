__int16 __thiscall sub_100C0B90(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10430750 & 1) == 0 )
  {
    dword_10430750 |= 1u;
    dword_10430748 = -1;
    dword_1043074C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1043074C;
  else
    return *(_WORD *)(this[1] + 20 * a2 + 4);
}
