float *__cdecl sub_10423440(float *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float *result; // eax
  double v7; // st6
  double v8; // st7
  double v9; // st3
  double v10; // st2
  double v11; // st4
  double v12; // st1
  double v13; // st0
  double v14; // st7
  double v15; // rt2
  double v16; // st4
  double v17; // st3
  double v18; // st5
  double v19; // rtt
  double v20; // st1
  double v21; // st6
  double v22; // st1
  double v23; // st4
  double v24; // st6
  double v25; // st7
  double v26; // st3
  double v27; // st5
  double v28; // st4
  double v29; // st5
  float v30; // [esp+0h] [ebp-24h]
  float v31; // [esp+0h] [ebp-24h]
  float v32; // [esp+4h] [ebp-20h]
  float v33; // [esp+8h] [ebp-1Ch]
  float v34; // [esp+8h] [ebp-1Ch]
  float v35; // [esp+Ch] [ebp-18h]
  float v36; // [esp+10h] [ebp-14h]
  float v37; // [esp+10h] [ebp-14h]
  float v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+14h] [ebp-10h]
  float v40; // [esp+18h] [ebp-Ch]
  float v41; // [esp+18h] [ebp-Ch]
  float v42; // [esp+1Ch] [ebp-8h]
  float v43; // [esp+1Ch] [ebp-8h]

  result = a6;
  v7 = a5 * a5 * 0.5;
  v8 = v7 * a5;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  v9 = *a1 * -v8;
  v10 = a1[1] * -v8;
  v11 = -v8 * a1[2];
  v35 = *a2 * (v8 * 3.0);
  v36 = a2[1] * (v8 * 3.0);
  v38 = v8 * 3.0 * a2[2];
  v40 = *a3 * (v8 * -3.0);
  v42 = a3[1] * (v8 * -3.0);
  v12 = v8 * -3.0 * a3[2];
  v30 = *a4 * v8;
  v13 = v8;
  v14 = v8 * a4[1];
  v33 = v13 * a4[2];
  *a6 = v9 + v30 + v40 + v35;
  a6[1] = v10 + v14 + v42 + v36;
  v15 = 0.5 * a5;
  a6[2] = v11 + v12 + v33 + v38;
  v16 = *a1 * (v7 + v7);
  v17 = a1[1] * (v7 + v7);
  v18 = (v7 + v7) * a1[2];
  v37 = a2[1] * (v7 * -5.0);
  v19 = *a2 * (v7 * -5.0);
  v39 = v7 * -5.0 * a2[2];
  v41 = *a3 * (v7 * 4.0);
  v43 = a3[1] * (v7 * 4.0);
  v20 = v7;
  v21 = v7 * 4.0 * a3[2];
  v22 = -v20;
  v31 = *a4 * v22;
  v32 = v22 * a4[1];
  v34 = v22 * a4[2];
  *a6 = v16 + v19 + *a6 + v31 + v41;
  a6[1] = v17 + a6[1] + v32 + v43 + v37;
  a6[2] = v18 + v21 + a6[2] + v34 + v39;
  v23 = a1[1] * -v15;
  v24 = -v15 * a1[2];
  v25 = v15 * a3[2];
  v26 = *a1 * -v15 + *a3 * v15 + *a6;
  v27 = a3[1] * v15;
  *a6 = v26;
  v28 = v23 + v27 + a6[1];
  a6[1] = v28;
  v29 = v24 + v25 + a6[2];
  a6[2] = v29;
  *a6 = v26 + *a2;
  a6[1] = v28 + a2[1];
  a6[2] = v29 + a2[2];
  return result;
}
