double __stdcall sub_100F29E0(int a1)
{
  double v1; // st7

  v1 = (double)*(unsigned __int8 *)(a1 + 53);
  return v1 + *(float *)(a1 + 44) / *(float *)(a1 + 40) * ((double)*(unsigned __int8 *)(a1 + 54) - v1);
}
