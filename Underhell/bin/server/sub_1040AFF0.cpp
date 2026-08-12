float *__stdcall sub_1040AFF0(float *a1, float *a2, int a3)
{
  double v3; // st7
  float *result; // eax

  v3 = *(float *)(dword_106F09EC + 44);
  result = a1;
  *a1 = *a2 * v3;
  a1[1] = a2[1] * v3;
  a1[2] = v3 * a2[2];
  return result;
}
