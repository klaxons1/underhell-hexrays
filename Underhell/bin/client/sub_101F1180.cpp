float *__cdecl sub_101F1180(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double v11; // st1
  double v12; // st5
  double v13; // rt1
  double v14; // st7
  long double v15; // st2
  long double v16; // st1
  long double v17; // st4
  long double v18; // st3
  float *result; // eax
  float v20; // [esp+0h] [ebp-Ch]

  v5 = (*a2 + *a3) * 0.5;
  v6 = (a2[1] + a3[1]) * 0.5;
  v7 = (a2[2] + a3[2]) * 0.5;
  v8 = *a3 - v5;
  v9 = a3[1] - v6;
  v10 = a3[2] - v7;
  v20 = *a1 * v5 + a1[8] * v7 + a1[4] * v6;
  v11 = v7;
  v12 = a1[9] * v7 + a1[5] * v6 + a1[1] * v5;
  v13 = v10;
  v14 = v5 * a1[2] + v11 * a1[10] + v6 * a1[6];
  v15 = fabs(*a1 * v8) + fabs(a1[4] * v9) + fabs(a1[8] * v10);
  v16 = v8 * a1[2];
  v17 = fabs(a1[1] * v8) + fabs(a1[5] * v9) + fabs(a1[9] * v13);
  v18 = fabs(v16) + fabs(v9 * a1[6]) + fabs(v13 * a1[10]);
  *a4 = v20 - v15;
  a4[1] = v12 - v17;
  a4[2] = v14 - v18;
  result = a5;
  *a5 = v15 + v20;
  a5[1] = v12 + v17;
  a5[2] = v14 + v18;
  return result;
}
