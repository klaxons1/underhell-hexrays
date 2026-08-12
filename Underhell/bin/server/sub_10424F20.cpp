float *__cdecl sub_10424F20(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *result; // eax

  result = a1;
  *a1 = *a3;
  a1[4] = a3[1];
  a1[8] = a3[2];
  a1[1] = *a4;
  a1[5] = a4[1];
  a1[9] = a4[2];
  a1[2] = *a5;
  a1[6] = a5[1];
  a1[10] = a5[2];
  a1[3] = *a2;
  a1[7] = a2[1];
  a1[11] = a2[2];
  return result;
}
