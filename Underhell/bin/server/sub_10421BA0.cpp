float *__cdecl sub_10421BA0(float *a1, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5

  result = a2;
  v4 = *a1 - a2[3];
  v5 = a1[1] - a2[7];
  v6 = a1[2] - a2[11];
  *a3 = a2[8] * v6 + a2[4] * v5 + *a2 * v4;
  a3[1] = a2[9] * v6 + a2[5] * v5 + a2[1] * v4;
  a3[2] = v4 * a2[2] + v5 * a2[6] + v6 * a2[10];
  return result;
}
