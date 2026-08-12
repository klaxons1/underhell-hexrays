BOOL __thiscall sub_10052150(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  int v3; // ecx
  BOOL result; // eax

  v1 = this[1];
  v2 = *(_DWORD *)(v1 + 2888);
  result = 0;
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] )
  {
    v3 = *(_DWORD *)(v1 + 2888) == -1
      || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v1 + 2888) >> 12
       ? 0
       : off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1];
    if ( *(_WORD *)(v3 + 816) == 900 )
      return 1;
  }
  return result;
}
