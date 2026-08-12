char __thiscall sub_100524D0(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx

  v1 = this[1];
  v2 = *(_DWORD *)(v1 + 2888);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] )
  {
    return 1;
  }
  v4 = *(_DWORD *)(v1 + 2888);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1];
  v6 = *(_DWORD *)(v5 + 840);
  if ( v6 != 2 )
    return v6 == 1;
  if ( *(_DWORD *)(v1 + 2888) == -1
    || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v1 + 2888) >> 12 )
  {
    return MEMORY[0x340] == 0;
  }
  return *(_DWORD *)(off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] + 832) == 0;
}
