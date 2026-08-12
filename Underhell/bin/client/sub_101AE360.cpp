double __stdcall sub_101AE360(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double result; // st7
  double v8; // st6
  double v9; // rtt

  v4 = a1;
  v5 = a3 + a1;
  v6 = a4;
  if ( a4 < 0.0 )
    return 0.0;
  if ( v6 < v4 )
  {
    v8 = 0.0;
    result = 1.0 - (v4 - a4) / v4;
    goto LABEL_9;
  }
  result = 0.0;
  if ( v6 <= v5 )
    return 1.0;
  if ( a2 > 0.0 )
  {
    v9 = 1.0 - (a4 - v5) / a2;
    v8 = 0.0;
    result = v9;
LABEL_9:
    if ( v8 > result )
      return v8;
  }
  return result;
}
