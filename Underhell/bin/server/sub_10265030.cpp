double __cdecl sub_10265030(float *a1)
{
  double result; // st7
  double v2; // st6

  result = 0.0;
  if ( 0.0 != a1[1] || 0.0 != *a1 )
  {
    v2 = atan2(a1[1], *a1) * 57.29578;
    result = v2;
    if ( v2 < 0.0 )
      return v2 + 360.0;
  }
  return result;
}
