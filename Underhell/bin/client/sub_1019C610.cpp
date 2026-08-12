double __stdcall sub_1019C610(int a1)
{
  double v1; // st7

  v1 = (double)*(unsigned __int8 *)(a1 + 51);
  return v1 * 0.0039215689
       + *(float *)(a1 + 44)
       / *(float *)(a1 + 40)
       * (0.0039215689 * (double)*(unsigned __int8 *)(a1 + 52) - v1 * 0.0039215689);
}
