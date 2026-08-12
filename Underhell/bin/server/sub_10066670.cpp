int __thiscall sub_10066670(int this)
{
  int result; // eax
  int v2; // ebx
  __int16 *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10692DD0;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      word_10692DC8 = -1;
      v2 |= 1u;
      word_10692DCA = -1;
      word_10692DCC = -1;
      dword_10692DD0 = v2;
      word_10692DCE = 1;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_10692DC8 : (__int16 *)(*(_DWORD *)(this + 4) + 80 * (__int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v2 & 1) == 0 )
    {
      word_10692DC8 = -1;
      v2 |= 1u;
      word_10692DCA = -1;
      word_10692DCC = -1;
      dword_10692DD0 = v2;
      word_10692DCE = 1;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_10692DC8;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 80 * (__int16)result);
  }
  return result;
}
