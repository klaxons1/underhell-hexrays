int __thiscall sub_1009D730(int this)
{
  int result; // eax
  int v2; // ebx
  __int16 *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10693D18;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      word_10693D10 = -1;
      v2 |= 1u;
      word_10693D12 = -1;
      word_10693D14 = -1;
      dword_10693D18 = v2;
      word_10693D16 = 1;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_10693D10 : (__int16 *)(*(_DWORD *)(this + 4) + 16 * (__int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v2 & 1) == 0 )
    {
      word_10693D10 = -1;
      v2 |= 1u;
      word_10693D12 = -1;
      word_10693D14 = -1;
      dword_10693D18 = v2;
      word_10693D16 = 1;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_10693D10;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 16 * (__int16)result);
  }
  return result;
}
