int __stdcall sub_100B54B0(float *a1, int a2, float a3, float *a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st7
  double v13; // st7
  float v14; // [esp+0h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-14h]
  bool v16; // [esp+1Bh] [ebp-1h]
  float v17; // [esp+2Ch] [ebp+10h]

  v16 = a3 > 0.0;
  v17 = fabs(a3);
  v4 = a2;
  if ( !v16 && sub_101ACCC0(a2) )
    v4 = sub_101ACCC0(a2);
  *a4 = *a1;
  a4[1] = a1[1];
  a4[2] = a1[2];
  if ( !sub_101ACC70(v4, 1) )
    return 0;
  while ( 1 )
  {
    if ( v16 )
      v5 = sub_101ACC90(v4);
    else
      v5 = sub_101ACCC0(v4);
    v6 = v5;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v7 = *a4 - *(float *)(v4 + 580);
    v8 = v7 * v7;
    v9 = a4[1] - *(float *)(v4 + 584);
    v10 = a4[2] - *(float *)(v4 + 588);
    v15 = v10 * v10 + v9 * v9 + v8;
    v11 = off_10689708(v15);
    if ( v17 < v11 )
      break;
    v17 = v17 - v11;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    *a4 = *(float *)(v4 + 580);
    a4[1] = *(float *)(v4 + 584);
    a4[2] = *(float *)(v4 + 588);
    if ( !sub_101ACC70(v6, 1) )
      goto LABEL_20;
    v4 = v6;
    if ( !sub_101ACC70(v6, 1) )
      return 0;
  }
  v13 = v17;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
  {
    sub_100DAE60(v4);
    v13 = v17;
  }
  v14 = v13;
  sub_100B5400(a4, v14, (float *)(v4 + 580), a4);
LABEL_20:
  if ( v16 )
    return v4;
  else
    return sub_101ACC90(v4);
}
