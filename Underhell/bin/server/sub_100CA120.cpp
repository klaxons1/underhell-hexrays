__int16 __thiscall sub_100CA120(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10696910 & 1) == 0 )
  {
    dword_10696910 |= 1u;
    dword_10696908 = -1;
    dword_1069690C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1069690C;
  else
    return *(_WORD *)(this[1] + 24 * a2 + 4);
}
