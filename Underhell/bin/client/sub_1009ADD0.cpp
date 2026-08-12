float *__cdecl sub_1009ADD0(float *a1, int a2, float *a3)
{
  float *result; // eax

  result = a1;
  *a3 = a1[1];
  a3[1] = a1[2];
  a3[2] = a1[3];
  return result;
}
