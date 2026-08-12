__int16 *__thiscall sub_1009A8F0(_DWORD *this, __int16 a2)
{
  if ( (dword_10693D0C & 1) == 0 )
  {
    dword_10693D0C |= 1u;
    word_10693D04 = -1;
    word_10693D06 = -1;
    word_10693D08 = -1;
    word_10693D0A = 1;
  }
  if ( a2 == -1 )
    return &word_10693D04;
  else
    return (__int16 *)(this[1] + 60 * a2);
}
