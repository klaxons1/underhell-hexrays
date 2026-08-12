float *__cdecl sub_10425340(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st2
  double v10; // st1
  double v11; // st5
  double v12; // rt2
  double v13; // st3
  long double v14; // rtt
  long double v15; // rt1
  long double v16; // st6
  float *result; // eax
  float v18; // [esp+0h] [ebp-Ch]

  v5 = (*a2 + *a3) * 0.5;
  v6 = (a2[1] + a3[1]) * 0.5;
  v7 = (a2[2] + a3[2]) * 0.5;
  v8 = *a3 - v5;
  v9 = a3[2] - v7;
  v18 = a1[1] * v6 + *a1 * v5 + a1[2] * v7 + a1[3];
  v10 = v7 * a1[10];
  v11 = a1[6] * v7 + a1[5] * v6 + v5 * a1[4] + a1[7];
  v12 = a3[1] - v6;
  v13 = v5 * a1[8] + v6 * a1[9] + v10 + a1[11];
  v14 = fabs(a1[5] * v12) + fabs(a1[4] * v8) + fabs(a1[6] * v9);
  v15 = fabs(*a1 * v8) + fabs(a1[1] * v12) + fabs(a1[2] * v9);
  v16 = fabs(v12 * a1[9]) + fabs(v9 * a1[10]) + fabs(v8 * a1[8]);
  *a4 = v18 - v15;
  a4[1] = v11 - v14;
  a4[2] = v13 - v16;
  result = a5;
  *a5 = v15 + v18;
  a5[1] = v14 + v11;
  a5[2] = v13 + v16;
  return result;
}
