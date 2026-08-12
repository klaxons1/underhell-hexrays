float *__cdecl sub_101EDA80(float *a1, float *a2, float *a3, float *a4)
{
  float *result; // eax

  result = a1;
  *a2 = *a1;
  a2[1] = a1[4];
  a2[2] = a1[8];
  *a3 = a1[1];
  a3[1] = a1[5];
  a3[2] = a1[9];
  *a4 = a1[2];
  a4[1] = a1[6];
  a4[2] = a1[10];
  *a3 = *a3 * -1.0;
  a3[1] = a3[1] * -1.0;
  a3[2] = -1.0 * a3[2];
  return result;
}
