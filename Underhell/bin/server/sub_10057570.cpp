BOOL __thiscall sub_10057570(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // esi
  double v7; // st7
  double v8; // st6
  double v9; // st5

  v2 = this[5];
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 0;
  if ( v3[1] == v4 )
    v5 = *v3;
  else
    v5 = 0;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v6 = this[1];
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  v7 = *(float *)(v6 + 580) - *(float *)(v5 + 580);
  v8 = *(float *)(v6 + 584) - *(float *)(v5 + 584);
  v9 = *(float *)(v6 + 588) - *(float *)(v5 + 588);
  return v9 * v9 + v8 * v8 + v7 * v7 > 810000.0;
}
