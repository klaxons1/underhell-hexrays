int __cdecl sub_10113E00(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int result; // eax

  v6 = 4 * (*(float *)(a1 + 4 * a2) > 0.0);
  *(float *)(v6 + a6) = *(float *)(a5 + 4 * a2) * *(float *)(a1 + 4 * a2);
  *(float *)(a6 - v6 + 4) = *(float *)(a4 + 4 * a2) * *(float *)(a1 + 4 * a2);
  result = 4 * (*(float *)(a1 + 4 * a3) > 0.0);
  *(float *)(result + a6) = *(float *)(a5 + 4 * a3) * *(float *)(a1 + 4 * a3) + *(float *)(result + a6);
  *(float *)(a6 - result + 4) = *(float *)(a4 + 4 * a3) * *(float *)(a1 + 4 * a3) + *(float *)(a6 - result + 4);
  return result;
}
