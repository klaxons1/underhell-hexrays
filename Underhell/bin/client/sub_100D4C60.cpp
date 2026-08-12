double __stdcall sub_100D4C60(float a1, float a2)
{
  double result; // st7
  double v3; // st6
  double v4; // st5

  result = 0.0;
  v3 = a2;
  v4 = a1;
  if ( a1 < -a2 )
    return (v4 + v3) / (32768.0 - v3);
  if ( v4 > v3 )
    return (v4 - v3) / (32768.0 - v3);
  return result;
}
