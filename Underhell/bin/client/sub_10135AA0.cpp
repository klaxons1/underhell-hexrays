float *__cdecl sub_10135AA0(float *a1, int a2, float *a3, float *a4, float *a5, float *a6)
{
  float *result; // eax

  sub_101EE040(a2, a3, a4, a5);
  result = a6;
  *a6 = *a4;
  a6[4] = *a5;
  a6[8] = -*a3;
  a6[12] = 0.0;
  a6[1] = a4[1];
  a6[5] = a5[1];
  a6[9] = -a3[1];
  a6[13] = 0.0;
  a6[2] = a4[2];
  a6[6] = a5[2];
  a6[10] = -a3[2];
  a6[14] = 0.0;
  a6[3] = -(a4[1] * a1[1] + *a1 * *a4 + a1[2] * a4[2]);
  a6[7] = -(a5[1] * a1[1] + *a1 * *a5 + a1[2] * a5[2]);
  a6[11] = *a1 * *a3 + a3[1] * a1[1] + a3[2] * a1[2];
  a6[15] = 1.0;
  return result;
}
