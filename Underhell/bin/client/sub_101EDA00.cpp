int __cdecl sub_101EDA00(int a1, int a2, float *a3)
{
  int result; // eax

  result = a1;
  *a3 = *(float *)(a1 + 4 * a2);
  a3[1] = *(float *)(a1 + 4 * a2 + 16);
  a3[2] = *(float *)(a1 + 4 * a2 + 32);
  return result;
}
