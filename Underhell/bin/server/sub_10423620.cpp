float *__cdecl sub_10423620(float *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  double v6; // st7
  float *result; // eax
  double v8; // st6
  double v9; // st4
  double v10; // st3
  double v11; // st5
  double v12; // rt0
  double v13; // st1
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st6
  double v18; // st3
  double v19; // st7
  double v20; // st1
  double v21; // st5
  double v22; // st6
  double v23; // st4
  double v24; // st7
  float v25; // [esp+0h] [ebp-24h]
  float v26; // [esp+0h] [ebp-24h]
  float v27; // [esp+4h] [ebp-20h]
  float v28; // [esp+4h] [ebp-20h]
  float v29; // [esp+8h] [ebp-1Ch]
  float v30; // [esp+Ch] [ebp-18h]
  float v31; // [esp+Ch] [ebp-18h]
  float v32; // [esp+10h] [ebp-14h]
  float v33; // [esp+10h] [ebp-14h]
  float v34; // [esp+1Ch] [ebp-8h]
  float v35; // [esp+20h] [ebp-4h]
  float v36; // [esp+20h] [ebp-4h]

  v6 = a5;
  result = a6;
  v8 = v6 * v6 * 1.5;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  v9 = *a1 * -v8;
  v10 = a1[1] * -v8;
  v11 = -v8 * a1[2];
  v34 = a2[1] * (v8 * 3.0);
  v12 = *a2 * (v8 * 3.0);
  v35 = v8 * 3.0 * a2[2];
  v30 = *a3 * (v8 * -3.0);
  v32 = a3[1] * (v8 * -3.0);
  v13 = v8 * -3.0 * a3[2];
  v25 = *a4 * v8;
  v27 = a4[1] * v8;
  v14 = v8 * a4[2];
  *a6 = v9 + v12 + v25 + v30;
  a6[1] = v10 + v27 + v32 + v34;
  a6[2] = v11 + v14 + v13 + v35;
  v15 = *a1 * (v6 + v6);
  v16 = a1[1] * (v6 + v6);
  v17 = (v6 + v6) * a1[2];
  v18 = a2[1] * (a5 * -5.0);
  v36 = a5 * -5.0 * a2[2];
  v31 = *a3 * (a5 * 4.0);
  v33 = a3[1] * (a5 * 4.0);
  v19 = a5 * 4.0 * a3[2];
  v20 = -a5;
  v26 = *a4 * v20;
  v28 = a4[1] * v20;
  v29 = v20 * a4[2];
  *a6 = v15 + *a2 * (a5 * -5.0) + *a6 + v26 + v31;
  a6[1] = v18 + a6[1] + v28 + v33 + v16;
  a6[2] = v17 + v19 + a6[2] + v29 + v36;
  v21 = a1[1] * -0.5;
  v22 = -0.5 * a1[2];
  v23 = a3[1] * 0.5;
  v24 = 0.5 * a3[2];
  *a6 = *a1 * -0.5 + *a3 * 0.5 + *a6;
  a6[1] = v21 + v23 + a6[1];
  a6[2] = v24 + a6[2] + v22;
  return result;
}
