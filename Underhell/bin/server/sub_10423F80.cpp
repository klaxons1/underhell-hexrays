float *__cdecl sub_10423F80(int a1, float *a2, float *a3, int a4, float a5, float *a6)
{
  float *result; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // st3
  double v13; // st7
  double v14; // st3
  double v15; // st1
  double v16; // st0
  double v17; // rt1
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st6
  double v22; // rt2
  double v23; // st4
  double v24; // st3
  double v25; // st5
  double v26; // st7
  double v27; // st5

  result = a6;
  v7 = a5;
  v8 = v7 * v7;
  v9 = v7 * (v7 * v7);
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  v10 = *a2 * (v9 + v9);
  v11 = (v9 + v9) * a2[2];
  v12 = v9;
  v13 = a2[1] * (v9 + v9);
  v14 = v12 * -2.0;
  v15 = a3[1] * v14;
  v16 = a3[2];
  *a6 = v10 + *a3 * v14;
  a6[1] = v13 + v15;
  v17 = v8;
  a6[2] = v14 * v16 + v11;
  v18 = -3.0 * v8;
  v19 = *a2 * v18;
  v20 = a2[1] * v18;
  v21 = v18 * a2[2];
  v22 = v20;
  v23 = v17 * 3.0 * a3[2];
  v24 = v19 + *a3 * (v17 * 3.0) + *a6;
  v25 = a3[1] * (v17 * 3.0);
  *a6 = v24;
  v26 = v22 + v25 + a6[1];
  a6[1] = v26;
  v27 = v21 + v23 + a6[2];
  a6[2] = v27;
  *a6 = v24 + *a2;
  a6[1] = v26 + a2[1];
  a6[2] = v27 + a2[2];
  return result;
}
