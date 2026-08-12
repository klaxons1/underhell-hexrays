unsigned __int16 __thiscall sub_1003CEE0(_WORD *this)
{
  unsigned __int16 result; // ax
  int v3; // esi

  result = this[586];
  if ( result != 0xFFFF )
  {
    v3 = (unsigned __int16)this[586];
    sub_1003A300(&dword_103D8A7C, result);
    result = word_103D8A8C;
    *(_WORD *)(dword_103D8A7C + 8 * v3 + 6) = word_103D8A8C;
    word_103D8A8C = v3;
    this[586] = -1;
  }
  return result;
}
