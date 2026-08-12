char __cdecl sub_101148D0(float *a1, float *a2, float *a3, float *a4, float *a5, float a6, int a7)
{
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // rtt
  double v14; // st6
  double v15; // st7
  double v16; // st4
  double v17; // st5
  double v18; // st3
  float *v19; // ecx
  int v20; // edx
  long double v21; // st2
  long double v22; // st2
  double v23; // st2
  double v24; // st3
  double v25; // rtt
  double v26; // st2
  double v27; // st5
  double v28; // st4
  char result; // al
  int v30; // eax
  double v31; // st7
  double v32; // st7
  double v33; // st6
  int v34[3]; // [esp+18h] [ebp-48h] BYREF
  float v35; // [esp+24h] [ebp-3Ch]
  float v36[3]; // [esp+30h] [ebp-30h] BYREF
  float v37; // [esp+3Ch] [ebp-24h]
  float v38; // [esp+40h] [ebp-20h]
  float v39; // [esp+44h] [ebp-1Ch]
  int v40; // [esp+48h] [ebp-18h] BYREF
  float v41; // [esp+4Ch] [ebp-14h]
  float v42; // [esp+50h] [ebp-10h]
  float v43; // [esp+54h] [ebp-Ch] BYREF
  float v44; // [esp+58h] [ebp-8h]
  float v45; // [esp+5Ch] [ebp-4h]

  *(float *)a7 = *a1;
  *(float *)(a7 + 4) = a1[1];
  *(float *)(a7 + 8) = a1[2];
  *(float *)(a7 + 12) = *a1;
  *(float *)(a7 + 16) = a1[1];
  *(float *)(a7 + 20) = a1[2];
  *(float *)(a7 + 12) = *a2 + *(float *)(a7 + 12);
  *(float *)(a7 + 16) = *(float *)(a7 + 16) + a2[1];
  *(float *)(a7 + 20) = *(float *)(a7 + 20) + a2[2];
  *(_WORD *)(a7 + 54) = 0;
  *(_DWORD *)(a7 + 48) = 0;
  *(float *)(a7 + 44) = 1.0;
  v7 = a4[1] + a5[1];
  v8 = a4[2] + a5[2];
  v43 = (*a4 + *a5) * 0.5;
  v44 = v7 * 0.5;
  v45 = 0.5 * v8;
  sub_10421B40(&v43, a3, v36);
  v9 = *a5 - v43;
  v35 = v9;
  v10 = a5[1] - v44;
  v11 = v9;
  v12 = a5[2] - v45;
  v43 = v11;
  v44 = v10;
  v13 = v10;
  v14 = v12;
  v15 = v13;
  v45 = v14;
  v16 = *a1 + *a2 - v36[0];
  v17 = a1[1] + a2[1] - v36[1];
  v18 = a1[2] + a2[2] - v36[2];
  *(float *)&v40 = 0.0;
  v19 = a3 + 8;
  v41 = 0.0;
  v20 = 0;
  v42 = 0.0;
  do
  {
    v21 = *(v19 - 4) * a2[1] + *a2 * *(v19 - 8) + *v19 * a2[2];
    *(float *)((char *)&v40 + v20) = v21;
    v22 = fabs(v21);
    *(float *)((char *)&v37 + v20) = v22;
    if ( fabs(*(v19 - 4) * v17 + *(v19 - 8) * v16 + *v19 * v18) > v22 + *(float *)((char *)&v43 + v20) )
      return 0;
    v20 += 4;
    ++v19;
  }
  while ( v20 < 12 );
  v23 = a2[1] * v18 - v17 * a2[2];
  v24 = v16 * a2[2] - v18 * *a2;
  v25 = v23;
  v26 = v17 * *a2;
  v27 = v25;
  v28 = v26 - v16 * a2[1];
  if ( v38 * v14 + v39 * v15 < fabs(a3[4] * v24 + *a3 * v25 + v28 * a3[8]) )
    return 0;
  if ( v39 * v35 + v14 * v37 < fabs(a3[5] * v24 + a3[1] * v27 + a3[9] * v28) )
    return 0;
  if ( v35 * v38 + v15 * v37 < fabs(v27 * a3[2] + v24 * a3[6] + v28 * a3[10]) )
    return 0;
  sub_10421BA0(a1, a3, v34);
  *(float *)&v40 = *(float *)&v40 * 2.0;
  v41 = v41 * 2.0;
  v42 = 2.0 * v42;
  if ( !sub_10113A30((float *)v34, (float *)&v40, (int)a4, (int)a5, a6, a7, 0) )
    return 0;
  v30 = *(unsigned __int8 *)(a7 + 40);
  v31 = *(float *)(a7 + 4 * v30 + 24);
  *(float *)(a7 + 24) = a3[v30] * v31;
  *(float *)(a7 + 28) = a3[*(unsigned __int8 *)(a7 + 40) + 4] * v31;
  result = 1;
  *(float *)(a7 + 32) = v31 * a3[*(unsigned __int8 *)(a7 + 40) + 8];
  v32 = *(float *)(a7 + 28) * *(float *)(a7 + 16) + *(float *)(a7 + 12) * *(float *)(a7 + 24);
  v33 = *(float *)(a7 + 32) * *(float *)(a7 + 20);
  *(_BYTE *)(a7 + 40) = 3;
  *(float *)(a7 + 36) = v32 + v33;
  return result;
}
