int __thiscall sub_101EB8D0(int this)
{
  int v1; // ebx
  int result; // eax
  __int16 *v3; // edx

  v1 = dword_10458E0C;
  result = *(unsigned __int16 *)(this + 16);
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458E0C = v1;
      word_10458E04 = -1;
      word_10458E06 = -1;
      word_10458E08 = -1;
      word_10458E0A = 1;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_10458E04 : (__int16 *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458E0C = v1;
      word_10458E04 = -1;
      word_10458E06 = -1;
      word_10458E08 = -1;
      word_10458E0A = 1;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_10458E04;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
  }
  return result;
}
