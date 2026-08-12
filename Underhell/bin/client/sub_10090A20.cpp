int __cdecl sub_10090A20(float *a1, float *a2, float *a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int result; // eax

  v4 = 4 * (*a1 > 0.0);
  *(float *)(v4 + a4) = *a1 * *a3;
  *(float *)(a4 - v4 + 4) = *a1 * *a2;
  v5 = 4 * (a1[1] > 0.0);
  *(float *)(v5 + a4) = a3[1] * a1[1] + *(float *)(v5 + a4);
  *(float *)(a4 - v5 + 4) = a2[1] * a1[1] + *(float *)(a4 - v5 + 4);
  result = 4 * (a1[2] > 0.0);
  *(float *)(result + a4) = a3[2] * a1[2] + *(float *)(result + a4);
  *(float *)(a4 - result + 4) = a2[2] * a1[2] + *(float *)(a4 - result + 4);
  return result;
}
