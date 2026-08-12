float *__thiscall sub_100A6560(int this, float *a2, float *a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // eax
  unsigned int v7; // esi
  float *v8; // edi
  int v9; // esi
  float *result; // eax
  int v11; // esi
  int v12; // eax
  float *v13; // ecx
  double v14; // st7
  int v15; // edx
  int v16; // ecx
  float v17; // [esp+4h] [ebp-Ch]
  float v18; // [esp+4h] [ebp-Ch]
  float v19; // [esp+4h] [ebp-Ch]
  float v20; // [esp+8h] [ebp-8h]
  float v21; // [esp+8h] [ebp-8h]
  float v22; // [esp+8h] [ebp-8h]
  float v23; // [esp+Ch] [ebp-4h]
  float v24; // [esp+Ch] [ebp-4h]
  float v25; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD *)(this + 92);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 92) & 0xFFF) + 1], v5[1] != v4 >> 12) || !*v5 )
  {
    if ( *(float *)(this + 80) == flt_106F1CA8
      && *(float *)(this + 84) == flt_106F1CAC
      && *(float *)(this + 88) == flt_106F1CB0 )
    {
      v12 = sub_100B99B0(this);
      if ( v12 )
      {
        v13 = *(float **)(v12 + 44);
        v14 = *(float *)v12;
        if ( v13 )
        {
          v19 = v14 - *v13;
          v22 = *(float *)(v12 + 4) - v13[1];
          v25 = *(float *)(v12 + 8) - v13[2];
        }
        else
        {
          v19 = v14 - *a3;
          v22 = *(float *)(v12 + 4) - a3[1];
          v25 = *(float *)(v12 + 8) - a3[2];
        }
        off_10689714();
        result = a2;
        *a2 = v19;
        a2[1] = v22;
        a2[2] = v25;
        return result;
      }
    }
LABEL_28:
    result = a2;
    v15 = *(_DWORD *)(this + 84);
    *a2 = *(float *)(this + 80);
    v16 = *(_DWORD *)(this + 88);
    *((_DWORD *)a2 + 1) = v15;
    *((_DWORD *)a2 + 2) = v16;
    return result;
  }
  v6 = sub_100B99B0(this);
  if ( !v6 )
    goto LABEL_28;
  v7 = *(_DWORD *)(this + 92);
  v8 = *(float **)(v6 + 44);
  if ( v8 )
  {
    if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    v17 = *(float *)(v9 + 580) - *v8;
    v20 = *(float *)(v9 + 584) - v8[1];
    v23 = *(float *)(v9 + 588) - v8[2];
    off_10689714();
    result = a2;
    *a2 = v17;
    a2[1] = v20;
    a2[2] = v23;
  }
  else
  {
    if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
      sub_100DAE60(v11);
    v18 = *(float *)(v11 + 580) - *a3;
    v21 = *(float *)(v11 + 584) - a3[1];
    v24 = *(float *)(v11 + 588) - a3[2];
    off_10689714();
    result = a2;
    *a2 = v18;
    a2[1] = v21;
    a2[2] = v24;
  }
  return result;
}
