float *__cdecl sub_101F0BA0(float a1, float *a2, float *a3)
{
  float *result; // eax
  double v5; // st6
  double v6; // st7

  sub_101EE560(a1, a3);
  result = a2;
  v5 = (a3[6] * a2[2] + a3[5] * a2[1] + a3[4] * *a2) * -1.0;
  v6 = (a3[10] * a2[2] + a3[9] * a2[1] + a3[8] * *a2) * -1.0;
  a3[3] = (a3[2] * a2[2] + a3[1] * a2[1] + *a2 * *a3) * -1.0;
  a3[7] = v5;
  a3[11] = v6;
  return result;
}
