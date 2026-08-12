float *__thiscall sub_102E5D50(_DWORD *this, float *a2, int a3)
{
  float *result; // eax
  float v4; // edx
  bool v6; // cc
  float v7; // ecx
  unsigned int v8; // eax
  int v9; // esi
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  double v14; // st7
  unsigned int v15; // eax
  int v16; // esi
  float v17; // [esp+0h] [ebp-Ch]
  float v18; // [esp+4h] [ebp-8h]
  int v19; // [esp+8h] [ebp-4h]

  result = a2;
  v4 = flt_106F1CAC;
  v18 = 9999999.0;
  v6 = this[299] <= 0;
  *a2 = flt_106F1CA8;
  v7 = flt_106F1CB0;
  a2[1] = v4;
  a2[2] = v7;
  v19 = 0;
  if ( !v6 )
  {
    do
    {
      if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
        sub_100DAE60(a3);
      v8 = *(_DWORD *)(this[296] + 4 * v19);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[296] + 4 * v19) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(this[296] + 4 * v19) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      v10 = *(float *)(v9 + 580) - *(float *)(a3 + 580);
      v11 = v10 * v10;
      v12 = *(float *)(v9 + 584) - *(float *)(a3 + 584);
      v13 = *(float *)(v9 + 588) - *(float *)(a3 + 588);
      v14 = v13 * v13 + v12 * v12 + v11;
      if ( v18 > v14 )
      {
        v15 = *(_DWORD *)(this[296] + 4 * v19);
        if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[296] + 4 * v19) & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*(_DWORD *)(this[296] + 4 * v19) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
        {
          sub_100DAE60(v16);
          v17 = v14;
          v14 = v17;
        }
        *a2 = *(float *)(v16 + 580);
        a2[1] = *(float *)(v16 + 584);
        a2[2] = *(float *)(v16 + 588);
        v18 = v14;
      }
      ++v19;
    }
    while ( v19 < this[299] );
    return a2;
  }
  return result;
}
