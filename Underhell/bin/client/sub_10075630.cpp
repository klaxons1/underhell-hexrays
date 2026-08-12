__int16 __thiscall sub_10075630(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1041338C & 1) == 0 )
  {
    dword_1041338C |= 1u;
    word_10413384 = -1;
    word_10413386 = -1;
    dword_10413388 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return word_10413384;
  else
    return *(_WORD *)(this[1] + 144 * a2);
}
