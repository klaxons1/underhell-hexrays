BOOL __thiscall sub_10052360(int this)
{
  int v2; // edx
  unsigned int v3; // eax
  int *v4; // ebx
  int v5; // ecx
  double v6; // st7
  int v7; // edi
  unsigned int v8; // eax
  int v9; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float v14; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4);
  v3 = *(_DWORD *)(v2 + 2888);
  if ( v3 == -1 )
    return 0;
  v4 = off_1061BE18;
  if ( off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != v3 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1] )
  {
    return 0;
  }
  v5 = *(_DWORD *)(v2 + 2888) == -1
    || off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v2 + 2888) >> 12
     ? 0
     : off_1061BE18[4 * (*(_DWORD *)(v2 + 2888) & 0xFFF) + 1];
  if ( *(_WORD *)(v5 + 816) != 900 )
    return 0;
  if ( *(float *)(this + 40) >= (double)*(float *)(this + 52) )
    v6 = *(float *)(this + 40);
  else
    v6 = *(float *)(this + 52);
  v14 = v6;
  if ( *(_DWORD *)(this + 20) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
  {
    v7 = 0;
  }
  else
  {
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  }
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
  {
    sub_100DAE60(v7);
    v4 = off_1061BE18;
  }
  v8 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
  if ( v8 == -1 || v4[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = v4[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  v10 = *(float *)(v9 + 580) - *(float *)(v7 + 580);
  v11 = *(float *)(v9 + 584) - *(float *)(v7 + 584);
  v12 = *(float *)(v9 + 588) - *(float *)(v7 + 588);
  return v14 * v14 > v12 * v12 + v11 * v11 + v10 * v10;
}
