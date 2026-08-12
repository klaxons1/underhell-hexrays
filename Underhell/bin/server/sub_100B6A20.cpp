void __thiscall sub_100B6A20(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  unsigned int v16; // eax
  int v17; // edi
  double v18; // st7
  double v19; // st6
  float v20; // [esp+4h] [ebp-10h]
  float v21; // [esp+8h] [ebp-Ch]
  float v22; // [esp+Ch] [ebp-8h]

  if ( *(_DWORD *)(this + 3776) )
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    v3 = *(_DWORD *)(this + 3644);
    if ( v3 == -1
      || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v3 >> 12) )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v4;
    }
    if ( *(_BYTE *)(this + 3732) )
      v6 = sub_101ACC90(v5);
    else
      v6 = sub_101ACCC0(v5);
    v7 = sub_101ACC70(v6, 1);
    if ( !v7 )
    {
      v8 = *(_DWORD *)(this + 3644);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      v7 = v9;
    }
    v10 = *(_DWORD *)(this + 3644);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( v7 == v11
      || ((v12 = *(_DWORD *)(this + 3648), v12 == -1)
       || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v12 >> 12
        ? (v13 = 0)
        : (v13 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1]),
          v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12
        ? (v14 = 0)
        : (v14 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1]),
          v14 == v13) )
    {
      *a2 = 0.0;
      a2[1] = 0.0;
      a2[2] = 0.0;
    }
    else
    {
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
        sub_100DAE60(v15);
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      *a2 = *(float *)(v7 + 580) - *(float *)(v15 + 580);
      a2[1] = *(float *)(v7 + 584) - *(float *)(v15 + 584);
      a2[2] = *(float *)(v7 + 588) - *(float *)(v15 + 588);
      off_10689714();
      v16 = *(_DWORD *)(this + 3644);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      v20 = *(float *)(v17 + 580) - *(float *)(this + 3708);
      v21 = *(float *)(v17 + 584) - *(float *)(this + 3712);
      v22 = *(float *)(v17 + 588) - *(float *)(this + 3716);
      off_10689714();
      v18 = a2[1] * v21 + *a2 * v20 + a2[2] * v22;
      v19 = 1.0;
      if ( v18 > 1.0 || (v19 = 0.0, v18 < 0.0) )
        v18 = v19;
      *a2 = *a2 * v18;
      a2[1] = a2[1] * v18;
      a2[2] = v18 * a2[2];
    }
  }
}
