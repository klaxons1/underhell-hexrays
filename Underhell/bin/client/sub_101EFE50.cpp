float *__cdecl sub_101EFE50(float *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float *result; // eax
  double v7; // st6
  double v8; // st4
  double v9; // st7
  double v10; // st2
  double v11; // st1
  double v12; // st7
  double v13; // st2
  double v14; // st1
  double v15; // st0
  double v16; // st2
  double v17; // rtt
  double v18; // st1
  double v19; // st3
  double v20; // st4
  double v21; // st2
  double v22; // st6
  double v23; // st1
  double v24; // st7
  double v25; // st2
  double v26; // st3
  double v27; // st5
  double v28; // st4
  double v29; // rt2
  double v30; // rtt
  float v31; // [esp+0h] [ebp-30h]
  float v32; // [esp+0h] [ebp-30h]
  float v33; // [esp+0h] [ebp-30h]
  float v34; // [esp+4h] [ebp-2Ch]
  float v35; // [esp+4h] [ebp-2Ch]
  float v36; // [esp+8h] [ebp-28h]
  float v37; // [esp+8h] [ebp-28h]
  float v38; // [esp+8h] [ebp-28h]
  float v39; // [esp+Ch] [ebp-24h]
  float v40; // [esp+Ch] [ebp-24h]
  float v41; // [esp+10h] [ebp-20h]
  float v42; // [esp+14h] [ebp-1Ch]
  float v43; // [esp+14h] [ebp-1Ch]
  float v44; // [esp+1Ch] [ebp-14h]
  float v45; // [esp+20h] [ebp-10h]
  float v46; // [esp+20h] [ebp-10h]
  float v47; // [esp+24h] [ebp-Ch]
  float v48; // [esp+28h] [ebp-8h]

  result = a6;
  v7 = a5 * 0.16666667;
  v8 = v7 * a5;
  v9 = a5 * v8;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  v10 = *a1 * -v9;
  v44 = -v9 * a1[1];
  v45 = -v9 * a1[2];
  v39 = *a2 * (v9 * 3.0);
  v41 = v9 * 3.0 * a2[1];
  v42 = v9 * 3.0 * a2[2];
  v31 = *a3 * (v9 * -3.0);
  v11 = v9 * -3.0 * a3[1];
  v36 = v9 * -3.0 * a3[2];
  v47 = *a4 * v9;
  v48 = a4[1] * v9;
  v12 = v9 * a4[2];
  *a6 = v10 + v47 + v31 + v39;
  a6[1] = v11 + v48 + v41 + v44;
  a6[2] = v12 + v36 + v42 + v45;
  v13 = v8 * 3.0;
  v14 = *a1 * v13;
  v15 = v13;
  v16 = v13 * a1[1];
  v46 = v15 * a1[2];
  v17 = v14;
  v40 = *a2 * (v8 * -6.0);
  v18 = v8 * -6.0 * a2[1];
  v43 = v8 * -6.0 * a2[2];
  v32 = *a3 * (v8 * 3.0);
  v34 = v8 * 3.0 * a3[1];
  v37 = v8 * 3.0 * a3[2];
  *a6 = v17 + *a6 + v32 + v40;
  a6[1] = v16 + v18 + v34 + a6[1];
  a6[2] = a6[2] + v37 + v43 + v46;
  v19 = *a1 * (v7 * -3.0);
  v20 = v7 * -3.0 * a1[1];
  v21 = v7;
  v22 = v7 * -3.0 * a1[2];
  v23 = 3.0 * v21;
  v24 = v23 * a3[1];
  v25 = v19 + *a3 * v23 + *a6;
  v26 = v23 * a3[2];
  *a6 = v25;
  a6[1] = v20 + v24 + a6[1];
  a6[2] = v22 + v26 + a6[2];
  v27 = a1[1] * 0.16666667;
  v28 = a1[2] * 0.16666667;
  v33 = *a3 * 0.16666667;
  v35 = a3[1] * 0.16666667;
  v29 = a2[1] * 0.66666669;
  v38 = 0.16666667 * a3[2];
  v30 = 0.66666669 * a2[2];
  *a6 = *a1 * 0.16666667 + *a2 * 0.66666669 + *a6 + v33;
  a6[1] = v27 + v29 + v35 + a6[1];
  a6[2] = v28 + v30 + a6[2] + v38;
  return result;
}
