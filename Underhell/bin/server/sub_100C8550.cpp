int __thiscall sub_100C8550(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10696910 & 1) == 0 )
  {
    dword_10696910 |= 1u;
    dword_10696908 = -1;
    dword_1069690C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1069690C);
  else
    return *(unsigned __int16 *)(this[1] + 24 * a2 + 6);
}
