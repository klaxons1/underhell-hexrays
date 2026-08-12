float *__cdecl sub_10421D00(float *a1, int a2, int a3)
{
  float *result; // eax

  result = a1;
  *(float *)(a3 + 4 * a2) = *a1;
  *(float *)(a3 + 4 * a2 + 16) = a1[1];
  *(float *)(a3 + 4 * a2 + 32) = a1[2];
  return result;
}
