float *__cdecl sub_10260C90(float *a1, float *a2, float *a3, float a4)
{
  double v4; // st7
  double v5; // st5
  float *result; // eax
  double v7; // st6

  v4 = *a3 * a4;
  v5 = a3[1] * a4;
  result = a1;
  v7 = a4 * a3[2];
  *a1 = a2[4] * v5 + *a2 * v4 + a2[8] * v7;
  a1[1] = a2[1] * v4 + a2[5] * v5 + a2[9] * v7;
  a1[2] = v4 * a2[2] + v5 * a2[6] + v7 * a2[10];
  return result;
}
