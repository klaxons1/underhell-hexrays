bool __thiscall sub_10296970(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = this[1];
  v2 = *(_DWORD *)(v1 + 2888);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] )
  {
    return 0;
  }
  if ( *(_DWORD *)(v1 + 2888) == -1
    || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v1 + 2888) >> 12 )
  {
    return MEMORY[0x33C] == 0;
  }
  return *(_DWORD *)(off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] + 828) == 0;
}
