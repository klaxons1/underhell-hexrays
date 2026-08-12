float *__cdecl sub_10423940(float *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  double v6; // st7
  float *result; // eax
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st7
  double v12; // st3
  double v13; // st5
  double v14; // rt2

  v6 = a5;
  result = a6;
  v8 = v6 * v6;
  v9 = v6 * v6 * v6;
  v10 = v9 * 2.0 - v6 * v6 * 3.0 + 1.0;
  v11 = a5 + v9 - 2.0 * (v6 * v6);
  v12 = v9;
  v13 = 1.0 - v10;
  *a6 = *a1 * v10;
  a6[1] = a1[1] * v10;
  a6[2] = v10 * a1[2];
  *a6 = *a2 * v13 + *a6;
  a6[1] = a2[1] * v13 + a6[1];
  a6[2] = v13 * a2[2] + a6[2];
  *a6 = *a3 * v11 + *a6;
  a6[1] = a3[1] * v11 + a6[1];
  v14 = v12 - v8;
  a6[2] = v11 * a3[2] + a6[2];
  *a6 = *a4 * v14 + *a6;
  a6[1] = a4[1] * v14 + a6[1];
  a6[2] = v14 * a4[2] + a6[2];
  return result;
}
