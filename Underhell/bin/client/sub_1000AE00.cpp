float *__stdcall sub_1000AE00(int a1, float *a2, int a3, int a4)
{
  float *result; // eax

  result = a2;
  *a2 = *a2 + 20.0;
  *(float *)(a1 + 4) = *(float *)(a1 + 4) - 20.0;
  a2[1] = a2[1] + 20.0;
  a2[2] = a2[2] + 15.0;
  return result;
}
