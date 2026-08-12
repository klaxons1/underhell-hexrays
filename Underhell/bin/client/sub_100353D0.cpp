float *__cdecl sub_100353D0(float *a1, float a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st3
  double v9; // st2
  double v10; // st1
  double v11; // st0
  double v12; // st2
  float *result; // eax
  double v14; // rt1
  double v15; // st4
  double v16; // st1
  double v17; // st4
  double v18; // st2
  double v19; // rt0
  double v20; // st2
  double v21; // st7
  double v22; // st6
  float v23; // [esp+4h] [ebp-2Ch]
  float v24; // [esp+4h] [ebp-2Ch]
  float v25; // [esp+10h] [ebp-20h]
  float v26; // [esp+14h] [ebp-1Ch]
  float v27; // [esp+18h] [ebp-18h]
  float v28; // [esp+1Ch] [ebp-14h]
  float v29; // [esp+20h] [ebp-10h]
  float v30; // [esp+24h] [ebp-Ch]
  float v31; // [esp+28h] [ebp-8h]
  float v32; // [esp+2Ch] [ebp-4h]

  v30 = *a4 - *a3;
  v31 = a4[1] - a3[1];
  v32 = a4[2] - a3[2];
  v27 = *a5 - *a4;
  v28 = a5[1] - a4[1];
  v29 = a5[2] - a4[2];
  v5 = a2;
  v6 = v5 * v5;
  v7 = v5 * v5 * v5;
  v8 = v5 * v5 * 3.0;
  v9 = v7 + v7 - v8 + 1.0;
  v10 = *a4 * v9;
  v11 = v9;
  v12 = a4[1] * v9;
  result = a1;
  v26 = v11 * a4[2];
  *a1 = v10;
  v14 = v10;
  a1[1] = v12;
  a1[2] = v26;
  v15 = v8 - (v7 + v7);
  v16 = *a5 * v15;
  v23 = a5[1] * v15;
  v17 = v15 * a5[2];
  *a1 = v14 + v16;
  v18 = v12 + v23;
  a1[1] = v18;
  v19 = v18;
  v20 = v17 + v26;
  a1[2] = v20;
  v21 = v5 + v7 - (v5 * v5 + v5 * v5);
  v24 = v21 * v31;
  v22 = v7 - v6;
  v25 = v28 * v22;
  *a1 = v22 * v27 + v30 * v21 + v14 + v16;
  a1[1] = v19 + v24 + v25;
  a1[2] = v21 * v32 + v20 + v22 * v29;
  return result;
}
