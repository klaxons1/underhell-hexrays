double __cdecl sub_10112F00(float *a1, float *a2, float *a3, float *a4, float a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double result; // st7
  double v12; // st1
  double v13; // st3
  double v14; // rt1
  double v15; // st2
  double v16; // st4
  long double v17; // st2
  double v18; // st1
  double v19; // st4
  double v20; // st2
  double v21; // st3
  double v22; // st2
  double v23; // st1
  double v24; // st2
  double v25; // st5
  double v26; // st7
  double v27; // st7
  double v28; // st6
  double v29; // st5
  float v30; // [esp+8h] [ebp-1Ch]
  float v31; // [esp+Ch] [ebp-18h]
  float v32; // [esp+10h] [ebp-14h]
  float v33; // [esp+10h] [ebp-14h]
  float v34; // [esp+14h] [ebp-10h]
  float v35; // [esp+14h] [ebp-10h]
  float v36; // [esp+14h] [ebp-10h]
  float v37; // [esp+18h] [ebp-Ch]
  float v38; // [esp+1Ch] [ebp-8h]
  float v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+34h] [ebp+10h]
  float v41; // [esp+3Ch] [ebp+18h]

  v5 = *a3 - *a2;
  v6 = a3[1] - a2[1];
  v7 = a3[2] - a2[2];
  v8 = *a4 - *a2;
  v37 = v8;
  v9 = a4[1] - a2[1];
  v38 = v9;
  v10 = a4[2] - a2[2];
  v39 = v10;
  if ( LOBYTE(a5) )
  {
    v32 = v7 * v8 - v10 * v5;
    v34 = v9 * v5 - v8 * v6;
    if ( a1[5] * v32 + (v10 * v6 - v9 * v7) * a1[4] + a1[6] * v34 >= 0.0 )
      return -1.0;
    v10 = v39;
  }
  v12 = v9;
  v13 = a1[5] * v10 - a1[6] * v9;
  v14 = a1[6] * v8 - v10 * a1[4];
  v15 = v12 * a1[4] - v8 * a1[5];
  v16 = v14;
  v30 = v15;
  v17 = v14 * v6 + v13 * v5 + v15 * v7;
  if ( fabs(v17) < 0.000001 )
    return -1.0;
  v41 = 1.0 / v17;
  v35 = a1[2] - a2[2];
  v18 = v16 * (a1[1] - a2[1]);
  v19 = a1[1] - a2[1];
  v20 = v13 * (*a1 - *a2) + v18 + v35 * v30;
  v21 = *a1 - *a2;
  v22 = v20 * v41;
  *(float *)&v40 = v22;
  if ( v22 < 0.0 )
    return -1.0;
  if ( v22 > 1.0 )
    return -1.0;
  v23 = v19 * v7 - v35 * v6;
  v24 = v35 * v5 - v7 * v21;
  v25 = v6 * v21 - v5 * v19;
  v26 = (v25 * a1[6] + v24 * a1[5] + v23 * a1[4]) * v41;
  if ( v26 < 0.0 )
    return -1.0;
  if ( v26 + *(float *)&v40 > 1.0 )
    return -1.0;
  v27 = sub_10112E90((int)a1);
  v31 = v23;
  v33 = v24;
  v36 = v25;
  v28 = (v33 * v38 + v31 * v37 + v36 * v39) * v41;
  if ( -v27 > v28 )
    return -1.0;
  v29 = v27 + 1.0;
  result = 1.0;
  if ( v29 < v28 )
    return -1.0;
  if ( v28 <= 1.0 )
  {
    result = v28;
    if ( v28 < 0.0 )
      return 0.0;
  }
  return result;
}
