__int16 __thiscall sub_1014E2D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1043C98C & 1) == 0 )
  {
    dword_1043C98C |= 1u;
    dword_1043C984 = -1;
    dword_1043C988 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1043C984;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
