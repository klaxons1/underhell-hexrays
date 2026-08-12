double __stdcall sub_10025120(float a1, char a2)
{
  double result; // st7

  if ( a2 )
  {
    result = a1 - (double)(int)a1;
    if ( result < 0.0 )
      return result + 1.0;
  }
  else
  {
    result = 0.99900001;
    if ( a1 <= 0.99900001 )
    {
      result = a1;
      if ( a1 < 0.0 )
        return 0.0;
    }
  }
  return result;
}
