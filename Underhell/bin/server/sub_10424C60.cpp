double __cdecl sub_10424C60(float a1, float a2)
{
  double result; // st7

  result = a1 - a2;
  if ( result < -180.0 )
    return result + 360.0;
  if ( result > 180.0 )
    return result - 360.0;
  return result;
}
