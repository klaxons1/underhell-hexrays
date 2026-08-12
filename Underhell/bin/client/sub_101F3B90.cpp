double __cdecl sub_101F3B90(float a1)
{
  float v1; // xmm0_4

  v1 = 1.0 / fsqrt(a1);
  return (float)((float)((float)0.5 * v1) * (float)((float)3.0 - (float)((float)(a1 * v1) * v1)));
}
