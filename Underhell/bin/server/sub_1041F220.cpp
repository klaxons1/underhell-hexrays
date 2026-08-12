__int16 *__thiscall sub_1041F220(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106F1874 & 1) == 0 )
  {
    dword_106F1874 |= 1u;
    word_106F186C = -1;
    word_106F186E = -1;
    word_106F1870 = -1;
    word_106F1872 = 1;
  }
  if ( a2 == 0xFFFF )
    return &word_106F186C;
  else
    return (__int16 *)(this[1] + 12 * a2);
}
