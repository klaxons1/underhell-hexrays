int __thiscall sub_10001670(int this)
{
  int result; // eax
  int v2; // ebx
  __int16 *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10690078;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      word_10690070 = -1;
      word_10690072 = -1;
      dword_10690074 = 0x1FFFF;
      v2 |= 1u;
      dword_10690078 = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_10690070 : (__int16 *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v2 & 1) == 0 )
    {
      word_10690070 = -1;
      word_10690072 = -1;
      dword_10690074 = 0x1FFFF;
      v2 |= 1u;
      dword_10690078 = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_10690070;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
  }
  return result;
}
