char __cdecl sub_102DB400(float *a1, float *a2, float a3, float a4, int a5)
{
  float *v7; // esi
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // rt0
  double v13; // st3
  double v14; // st5
  double v16; // st7
  double v17; // st6
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st7
  float v22; // [esp+10h] [ebp-54h]
  float v23; // [esp+10h] [ebp-54h]
  float v24[3]; // [esp+20h] [ebp-44h] BYREF
  float v25[3]; // [esp+2Ch] [ebp-38h] BYREF
  float v26[3]; // [esp+38h] [ebp-2Ch] BYREF
  int v27[3]; // [esp+44h] [ebp-20h] BYREF
  int v28[3]; // [esp+50h] [ebp-14h] BYREF
  int v29; // [esp+5Ch] [ebp-8h] BYREF
  int v30; // [esp+60h] [ebp-4h] BYREF
  int v31; // [esp+6Ch] [ebp+8h]
  float v32; // [esp+78h] [ebp+14h]
  int v33; // [esp+7Ch] [ebp+18h]

  v7 = (float *)(a5 + 12);
  *(float *)a5 = *a1;
  *(float *)(a5 + 4) = a1[1];
  *(float *)(a5 + 8) = a1[2];
  *(float *)(a5 + 12) = *a1;
  *(float *)(a5 + 16) = a1[1];
  *(float *)(a5 + 20) = a1[2];
  *(float *)(a5 + 12) = *(float *)(a5 + 12) + a1[4];
  *(float *)(a5 + 16) = a1[5] + *(float *)(a5 + 16);
  *(float *)(a5 + 20) = a1[6] + *(float *)(a5 + 20);
  *(_WORD *)(a5 + 54) = 0;
  *(_DWORD *)(a5 + 48) = 0;
  *(float *)(a5 + 44) = 1.0;
  v8 = a4 * 0.5;
  v32 = v8;
  v9 = *a1 - *a2;
  *(float *)v28 = v9;
  v10 = a1[1] - a2[1];
  *(float *)&v28[1] = v10;
  v11 = a1[2] - a2[2];
  *(float *)&v28[2] = v11;
  v12 = v11;
  v13 = v9;
  v14 = v12;
  *(float *)v27 = v13 + a1[4];
  *(float *)&v27[1] = v10 + a1[5];
  *(float *)&v27[2] = a1[6] + v12;
  if ( fabs(a1[6]) >= 0.00000001 )
  {
    v22 = v8;
    *(float *)&v31 = sub_10113880((int)v28, (int)v27, 2, 1.0, v22);
    v23 = -v32;
    v16 = sub_10113880((int)v28, (int)v27, 2, 1.0, v23);
    *(float *)&v33 = v16;
    v17 = *(float *)&v31;
    if ( *(float *)&v31 > v16 )
    {
      v33 = v31;
      v17 = v16;
      v16 = *(float *)&v31;
      *(float *)&v31 = v17;
    }
    if ( v16 < 0.0 || v17 > 1.0 )
      return 0;
  }
  else
  {
    if ( -v8 > v14 || v14 > v8 )
      return 0;
    *(float *)&v31 = 0.0;
    *(float *)&v33 = 1.0;
  }
  if ( !sub_102DB360(&flt_106F1CA8, a3, (float *)v28, a1 + 4, (float *)&v29, (float *)&v30) )
    return 0;
  v18 = *(float *)&v30;
  if ( *(float *)&v30 < 0.0 )
    return 0;
  v19 = *(float *)&v29;
  if ( *(float *)&v29 > 1.0 )
    return 0;
  if ( *(float *)&v31 >= v19 )
    v19 = *(float *)&v31;
  if ( *(float *)&v33 <= v18 )
    v18 = *(float *)&v33;
  if ( v19 > v18 )
    return 0;
  *v7 = v19 * a1[4] + *a1;
  v7[1] = a1[5] * v19 + a1[1];
  v7[2] = a1[6] * v19 + a1[2];
  *(_DWORD *)(a5 + 48) = 1;
  *(float *)(a5 + 44) = v19;
  v26[0] = *a2;
  v26[1] = a2[1];
  v26[2] = a2[2] - v32;
  v25[0] = *a2;
  v25[1] = a2[1];
  v25[2] = v32 + a2[2];
  sub_10424670(v7, v25, v26, v24, 0);
  v20 = v7[1] - v24[1];
  v21 = v7[2] - v24[2];
  *(float *)(a5 + 24) = *v7 - v24[0];
  *(float *)(a5 + 28) = v20;
  *(float *)(a5 + 32) = v21;
  off_10689714();
  return 1;
}
