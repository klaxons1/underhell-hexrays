double __cdecl sub_101F0720(float a1, float a2)
{
  double v2; // st7
  long double v3; // st7

  v2 = a1;
  if ( a1 < 1.0 || v2 > 179.0 )
    v2 = 90.0;
  v3 = atan2(tan(v2 * 0.017453292 * 0.5) / a2, 1.0);
  return v3 * 57.29578 + v3 * 57.29578;
}
