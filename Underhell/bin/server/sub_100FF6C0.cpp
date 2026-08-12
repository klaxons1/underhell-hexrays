double __cdecl sub_100FF6C0(float *a1, float a2)
{
  double result; // st7
  double v3; // st6
  double v4; // st7

  result = 1.0;
  if ( a1[18] <= 1.0 )
  {
    v3 = a2;
  }
  else
  {
    v3 = a2;
    if ( a2 < (double)a1[15] )
      v3 = v3 + 1.0;
  }
  if ( a1[15] > v3 )
    return 0.0;
  if ( a1[16] <= v3 )
  {
    if ( a1[17] > v3 )
      return result;
    if ( a1[18] <= v3 )
      v4 = 0.0;
    else
      v4 = 1.0 - (v3 - a1[17]) / (a1[18] - a1[17]);
  }
  else
  {
    v4 = (v3 - a1[15]) / (a1[16] - a1[15]);
  }
  return 3.0 * v4 * v4 - v4 * ((v4 + v4) * v4);
}
