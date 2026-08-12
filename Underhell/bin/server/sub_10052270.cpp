int *__thiscall sub_10052270(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // esi

  if ( (dword_10692084 & 1) == 0 )
  {
    dword_10692084 |= 1u;
    dword_10692078 = LODWORD(flt_10689730);
    dword_1069207C = LODWORD(flt_10689734);
    dword_10692080 = LODWORD(flt_10689738);
  }
  v1 = this[1];
  if ( *(_DWORD *)(v1 + 2888) == -1
    || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v1 + 2888) >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1] )
  {
    return &dword_10692078;
  }
  v2 = *(_DWORD *)(v1 + 2888);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1];
  if ( *(_WORD *)(v3 + 816) != 900 )
    return &dword_10692078;
  v4 = *(_DWORD *)(v1 + 2888);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(v1 + 2888) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  return (int *)(v5 + 580);
}
