int __thiscall sub_1009CB70(int this)
{
  int result; // eax
  int v2; // ebx
  __int16 *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10693CF4;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      word_10693CEC = -1;
      v2 |= 1u;
      word_10693CEE = -1;
      word_10693CF0 = -1;
      dword_10693CF4 = v2;
      word_10693CF2 = 1;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_10693CEC : (__int16 *)(*(_DWORD *)(this + 4) + 60 * (__int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v2 & 1) == 0 )
    {
      word_10693CEC = -1;
      v2 |= 1u;
      word_10693CEE = -1;
      word_10693CF0 = -1;
      dword_10693CF4 = v2;
      word_10693CF2 = 1;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_10693CEC;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 60 * (__int16)result);
  }
  return result;
}
