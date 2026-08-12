bool __cdecl sub_10090120(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st4
  double v14; // rt1
  double v15; // st3
  double v16; // st5
  long double v17; // st3
  bool result; // al
  double v19; // st3
  double v20; // st2
  double v21; // rtt
  double v22; // rt1
  double v23; // st2
  double v24; // st5
  double v25; // st7
  double v26; // st6
  float v27; // [esp+8h] [ebp-1Ch]
  float v28; // [esp+Ch] [ebp-18h]
  float v29; // [esp+10h] [ebp-14h]
  float v30; // [esp+14h] [ebp-10h]
  float v31; // [esp+18h] [ebp-Ch]
  float v32; // [esp+1Ch] [ebp-8h]
  float v33; // [esp+20h] [ebp-4h]
  float v34; // [esp+20h] [ebp-4h]
  float v35; // [esp+34h] [ebp+10h]

  v7 = *a3 - *a2;
  v8 = a3[1] - a2[1];
  v27 = a3[2] - a2[2];
  v9 = *a4 - *a2;
  v28 = v9;
  v10 = a4[1] - a2[1];
  v29 = v10;
  v11 = a4[2] - a2[2];
  v30 = v11;
  v12 = v10 * a1[4];
  v13 = a1[5] * v11 - v10 * a1[6];
  v14 = v9 * a1[6] - v11 * a1[4];
  v15 = v12 - v9 * a1[5];
  v16 = v14;
  v33 = v15;
  v17 = v14 * v8 + v13 * v7 + v15 * v27;
  if ( fabs(v17) < 0.000001 )
    return 0;
  v35 = 1.0 / v17;
  v19 = *a1 - *a2;
  v20 = a1[1] - a2[1];
  v21 = a1[2] - a2[2];
  *a5 = (v13 * v19 + v16 * v20 + v21 * v33) * v35;
  v31 = v27 * v20 - v21 * v8;
  v22 = v20;
  v23 = v21 * v7 - v19 * v27;
  v24 = v8 * v19 - v7 * v22;
  *a6 = (v23 * a1[5] + a1[4] * v31 + v24 * a1[6]) * v35;
  result = 1;
  if ( a7 )
  {
    v25 = sub_100900B0((int)a1);
    v32 = v23;
    v34 = v24;
    v26 = (v32 * v29 + v31 * v28 + v34 * v30) * v35;
    *a7 = v26;
    if ( -v25 > v26 || v25 + 1.0 < v26 )
      return 0;
  }
  return result;
}
