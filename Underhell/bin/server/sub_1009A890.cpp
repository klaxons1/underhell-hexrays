__int16 *__thiscall sub_1009A890(_DWORD *this, __int16 a2)
{
  if ( (dword_10693D00 & 1) == 0 )
  {
    dword_10693D00 |= 1u;
    word_10693CF8 = -1;
    word_10693CFA = -1;
    word_10693CFC = -1;
    word_10693CFE = 1;
  }
  if ( a2 == -1 )
    return &word_10693CF8;
  else
    return (__int16 *)(this[1] + 56 * a2);
}
