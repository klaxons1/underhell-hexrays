int __usercall sub_101015D0@<eax>(float *a1@<eax>, float *a2@<edi>, float *a3, int a4)
{
  double v5; // st7
  double v6; // st5
  float *v7; // ecx
  int v8; // edx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st3
  long double v14; // st2
  long double v15; // st2
  double v16; // st1
  double v17; // rtt
  double v18; // st3
  double v19; // st5
  double v20; // st4
  double v21; // st7
  double v22; // st6
  double v24; // st7
  int v25; // ecx
  int v26[10]; // [esp+14h] [ebp-A4h] BYREF
  unsigned __int8 v27; // [esp+3Ch] [ebp-7Ch]
  float v28; // [esp+40h] [ebp-78h]
  char v29; // [esp+4Bh] [ebp-6Dh]
  int v30[5]; // [esp+68h] [ebp-50h] BYREF
  float v31; // [esp+7Ch] [ebp-3Ch]
  float v32[3]; // [esp+80h] [ebp-38h] BYREF
  int v33; // [esp+8Ch] [ebp-2Ch]
  int v34; // [esp+90h] [ebp-28h]
  int v35; // [esp+94h] [ebp-24h] BYREF
  float v36; // [esp+98h] [ebp-20h]
  float v37; // [esp+9Ch] [ebp-1Ch]
  float v38; // [esp+A0h] [ebp-18h]
  float v39; // [esp+A4h] [ebp-14h]
  float v40; // [esp+A8h] [ebp-10h]
  float v41; // [esp+ACh] [ebp-Ch] BYREF
  float v42; // [esp+B0h] [ebp-8h]
  float v43; // [esp+B4h] [ebp-4h]

  v5 = *(float *)(a4 + 44) * 0.5;
  v6 = a2[4];
  v33 = (int)(a1 + 2);
  v34 = (int)(a1 + 5);
  v38 = v6 * v5;
  v39 = a2[5] * v5;
  v40 = v5 * a2[6];
  v41 = (a1[2] + a1[5]) * 0.5;
  v42 = (a1[3] + a1[6]) * 0.5;
  v43 = 0.5 * (a1[4] + a1[7]);
  sub_10421B40(&v41, a3, v32);
  v7 = a3 + 8;
  v8 = 0;
  v41 = *(float *)v34 - v41;
  v42 = a1[6] - v42;
  v43 = a1[7] - v43;
  v9 = v38;
  v10 = *a2 + v38 - v32[0];
  v11 = v39;
  v12 = a2[1] + v39 - v32[1];
  v13 = v40;
  v31 = a2[2] + v40 - v32[2];
  *(float *)&v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  do
  {
    v14 = v11 * *(v7 - 4) + v9 * *(v7 - 8) + v13 * *v7;
    *(float *)((char *)&v35 + v8) = v14;
    v15 = fabs(v14);
    *(float *)((char *)&v38 + v8) = v15;
    if ( fabs(v12 * *(v7 - 4) + v10 * *(v7 - 8) + v31 * *v7) > v15 + *(float *)((char *)&v41 + v8) )
      return -1;
    v8 += 4;
    ++v7;
  }
  while ( v8 < 12 );
  v16 = v13;
  v17 = v31 * v11 - v13 * v12;
  v18 = v11;
  v19 = v17;
  v20 = v9 * v12;
  v21 = v16 * v10 - v31 * v9;
  v22 = v20 - v10 * v18;
  if ( v40 * v42 + v39 * v43 < fabs(a3[4] * v21 + *a3 * v17 + v22 * a3[8])
    || fabs(a3[5] * v21 + a3[1] * v19 + a3[9] * v22) > v40 * v41 + v38 * v43 )
  {
    return -1;
  }
  if ( v41 * v39 + v42 * v38 < fabs(v22 * a3[10] + v19 * a3[2] + v21 * a3[6]) )
    return -1;
  sub_10421BA0(a2, a3, v30);
  *(float *)&v35 = *(float *)&v35 * 2.0;
  v36 = v36 * 2.0;
  v37 = 2.0 * v37;
  if ( !(unsigned __int8)sub_10113A30((int)v30, (int)&v35, v33, v34, 0.0, (int)v26, 0) )
    return -1;
  v24 = v28 * *(float *)(a4 + 44);
  *(_BYTE *)(a4 + 55) = v29;
  v25 = v27;
  *(float *)(a4 + 44) = v24;
  if ( *(float *)&v26[v25 + 6] >= 0.0 )
    v25 += 3;
  return v25;
}
