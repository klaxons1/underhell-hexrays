__int16 *__thiscall sub_1009A830(_DWORD *this, __int16 a2)
{
  if ( (dword_10693CF4 & 1) == 0 )
  {
    dword_10693CF4 |= 1u;
    word_10693CEC = -1;
    word_10693CEE = -1;
    word_10693CF0 = -1;
    word_10693CF2 = 1;
  }
  if ( a2 == -1 )
    return &word_10693CEC;
  else
    return (__int16 *)(this[1] + 60 * a2);
}
