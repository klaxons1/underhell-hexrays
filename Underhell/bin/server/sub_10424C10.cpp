double __cdecl sub_10424C10(float a1, float a2)
{
  double result; // st7

  result = fmod(a1 - a2, 360.0);
  if ( a2 >= (double)a1 )
  {
    if ( result <= -180.0 )
      return result + 360.0;
  }
  else if ( result >= 180.0 )
  {
    return result - 360.0;
  }
  return result;
}
