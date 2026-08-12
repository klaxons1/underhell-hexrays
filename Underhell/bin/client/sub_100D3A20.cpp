double __cdecl sub_100D3A20(float a1, float a2, float a3)
{
  double result; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st5
  double v7; // st5
  double v8; // rt1
  double v9; // rt2
  double v10; // st5
  double v11; // st7
  double v12; // rt0
  double v13; // st6

  result = a1;
  v4 = a2;
  v5 = 360.0;
  if ( a2 == a1 )
  {
    v13 = 360.0;
  }
  else
  {
    if ( fabs(result - v4) > 180.0 )
    {
      v6 = a1;
      if ( a1 >= v4 )
        v7 = v6 - 360.0;
      else
        v7 = v6 + 360.0;
      v8 = v7;
      v5 = 360.0;
      result = v8;
    }
    v9 = v5;
    v10 = result;
    v11 = v9;
    if ( v10 >= v4 )
    {
      if ( v4 + 1.0 < v10 )
        v4 = v10 - (v10 - v4) / a3;
    }
    else if ( v4 - 1.0 > v10 )
    {
      v4 = v10 + (v4 - v10) / a3;
    }
    v12 = v4;
    v13 = v11;
    result = v12;
  }
  if ( result < 0.0 )
    return result + v13;
  if ( v13 <= result )
    return result - v13;
  return result;
}
