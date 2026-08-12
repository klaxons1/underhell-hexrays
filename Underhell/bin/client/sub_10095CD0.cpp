__int16 __thiscall sub_10095CD0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1042CC38 & 1) == 0 )
  {
    dword_1042CC38 |= 1u;
    dword_1042CC30 = -1;
    dword_1042CC34 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1042CC30;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
