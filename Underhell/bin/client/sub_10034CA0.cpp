float *__stdcall sub_10034CA0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st4
  double v6; // st5
  double v7; // st7
  float *result; // eax
  float v9; // [esp+0h] [ebp-4h]

  v4 = *a4 - *a3;
  v5 = a4[1] - a3[1];
  v6 = a4[2] - a3[2];
  v9 = v6 * v6 + v5 * v5 + v4 * v4;
  v7 = off_103EDFE0(v9);
  *a1 = *a1 - v7;
  a1[1] = a1[1] - v7;
  a1[2] = a1[2] - v7;
  result = a2;
  *a2 = *a2 + v7;
  a2[1] = a2[1] + v7;
  a2[2] = v7 + a2[2];
  return result;
}
