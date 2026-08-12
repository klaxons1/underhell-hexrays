double __stdcall sub_100F2A10(int a1, float a2)
{
  double result; // st7

  result = *(float *)(a1 + 56) * a2 + *(float *)(a1 + 36);
  *(float *)(a1 + 36) = result;
  return result;
}
