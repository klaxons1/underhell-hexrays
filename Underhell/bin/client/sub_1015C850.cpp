double __stdcall sub_1015C850(int a1, float a2)
{
  long double v2; // st7
  bool v3; // c0
  double v4; // st7

  *(float *)(a1 + 36) = a2 * *(float *)(a1 + 56) + *(float *)(a1 + 36);
  v2 = (a2 * -8.0 + 1.0) * *(float *)(a1 + 56);
  *(float *)(a1 + 56) = v2;
  if ( fabs(v2) >= 0.5 )
    return *(float *)(a1 + 36);
  v3 = v2 > 0.0;
  v4 = 0.5;
  if ( !v3 )
    v4 = -0.5;
  *(float *)(a1 + 56) = v4;
  return *(float *)(a1 + 36);
}
