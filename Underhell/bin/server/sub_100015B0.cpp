__int16 __thiscall sub_100015B0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10690078 & 1) == 0 )
  {
    dword_10690078 |= 1u;
    word_10690070 = -1;
    word_10690072 = -1;
    dword_10690074 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10690074;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
