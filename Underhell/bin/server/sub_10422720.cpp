float *__cdecl sub_10422720(float *a1, float a2, float *a3)
{
  float *result; // eax
  long double v4; // st7
  long double v5; // rt0
  long double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  long double v10; // st2
  long double v11; // st4

  result = a1;
  v4 = a2 * 0.0174532925199433;
  v5 = sin(v4);
  v6 = cos(v4);
  v7 = *a1 * *a1;
  v8 = a1[1] * a1[1];
  v9 = a1[2] * a1[2];
  *a3 = v7 + (1.0 - v7) * v6;
  a3[4] = *a1 * (1.0 - v6) * a1[1] + a1[2] * v5;
  a3[8] = *a1 * (1.0 - v6) * a1[2] - v5 * a1[1];
  a3[1] = *a1 * (1.0 - v6) * a1[1] - a1[2] * v5;
  v10 = v8 + (1.0 - v8) * v6;
  v11 = 1.0 - v6;
  a3[5] = v10;
  a3[9] = v11 * a1[2] * a1[1] + *a1 * v5;
  a3[2] = *a1 * v11 * a1[2] + v5 * a1[1];
  a3[6] = v11 * a1[2] * a1[1] - v5 * *a1;
  a3[10] = v9 + v6 * (1.0 - v9);
  a3[3] = 0.0;
  a3[7] = 0.0;
  a3[11] = 0.0;
  return result;
}
