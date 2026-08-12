int __thiscall sub_101C5AA0(unsigned __int16 *this, int a2)
{
  int result; // eax
  __int16 v3; // si
  unsigned int v4; // ecx
  int v5; // edx

  result = *(unsigned __int16 *)(dword_10638748 + 10 * *this);
  if ( (_WORD)result == 0xFFFF )
    return 0xFFFF;
  while ( 1 )
  {
    v3 = *(_WORD *)(dword_1063873C + 12 * (unsigned __int16)result + 10);
    v4 = *(_DWORD *)(dword_1063873C + 12 * (unsigned __int16)result);
    if ( v4 == -1
      || off_1061BE18[4 * (*(_DWORD *)(dword_1063873C + 12 * (unsigned __int16)result) & 0xFFF) + 2] != v4 >> 12 )
    {
      v5 = 0;
    }
    else
    {
      v5 = off_1061BE18[4 * (*(_DWORD *)(dword_1063873C + 12 * (unsigned __int16)result) & 0xFFF) + 1];
    }
    if ( v5 == a2 )
      break;
    result = *(unsigned __int16 *)(dword_1063873C + 12 * (unsigned __int16)result + 10);
    if ( v3 == -1 )
      return 0xFFFF;
  }
  return result;
}
