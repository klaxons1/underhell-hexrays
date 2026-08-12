double __stdcall sub_1009ED80(int a1, float a2)
{
  *(float *)(a1 + 36) = a2 * *(float *)(a1 + 56) + *(float *)(a1 + 36);
  *(float *)(a1 + 56) = (a2 * -4.0 + 1.0) * *(float *)(a1 + 56);
  return *(float *)(a1 + 36);
}
