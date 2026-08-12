double __cdecl sub_10424CA0(float a1)
{
  double result; // st7

  result = fmod(a1, 360.0);
  if ( result > 180.0 )
    result = result - 360.0;
  if ( result < -180.0 )
    return result + 360.0;
  return result;
}
