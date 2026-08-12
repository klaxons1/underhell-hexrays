int __thiscall sub_1005AC70(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // edx

  result = *(unsigned __int16 *)(this[20] + 10 * *(unsigned __int16 *)(a2 + 12));
  if ( (_WORD)result == 0xFFFF )
    return 0xFFFF;
  v4 = this[17];
  while ( *(unsigned __int16 *)(v4 + 40 * (unsigned __int16)result + 34) != a3 )
  {
    result = *(unsigned __int16 *)(v4 + 40 * (unsigned __int16)result + 38);
    if ( (_WORD)result == 0xFFFF )
      return 0xFFFF;
  }
  return result;
}
