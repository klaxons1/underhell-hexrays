__int16 *__thiscall sub_101EAC70(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10458E0C & 1) == 0 )
  {
    dword_10458E0C |= 1u;
    word_10458E04 = -1;
    word_10458E06 = -1;
    word_10458E08 = -1;
    word_10458E0A = 1;
  }
  if ( a2 == 0xFFFF )
    return &word_10458E04;
  else
    return (__int16 *)(this[1] + 12 * a2);
}
