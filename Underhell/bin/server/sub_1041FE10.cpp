int __thiscall sub_1041FE10(int this)
{
  int v1; // ebx
  int result; // eax
  __int16 *v3; // edx

  v1 = dword_106F1874;
  result = *(unsigned __int16 *)(this + 16);
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1874 = v1;
      word_106F186C = -1;
      word_106F186E = -1;
      word_106F1870 = -1;
      word_106F1872 = 1;
    }
    v3 = (_WORD)result == 0xFFFF ? &word_106F186C : (__int16 *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1874 = v1;
      word_106F186C = -1;
      word_106F186E = -1;
      word_106F1870 = -1;
      word_106F1872 = 1;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)word_106F186C;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
  }
  return result;
}
