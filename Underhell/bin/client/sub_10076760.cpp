double __cdecl sub_10076760(float a1, float a2)
{
  double result; // st7
  double v3; // st5
  double v4; // rt0
  double v5; // rt1
  double v6; // st5
  double v7; // st7
  double v8; // st5
  double v9; // rt2
  double v10; // rtt
  double v11; // st5
  double v12; // st7

  result = a1 - a2;
  if ( a2 >= (double)a1 )
  {
    if ( result <= -180.0 )
    {
      v8 = 360.0;
      while ( 1 )
      {
        v10 = v8;
        v11 = result + v8;
        v12 = v10;
        if ( v11 > -180.0 )
          break;
        v9 = v11;
        v8 = v12;
        result = v9;
      }
      return v11;
    }
  }
  else if ( result >= 180.0 )
  {
    v3 = 360.0;
    while ( 1 )
    {
      v5 = v3;
      v6 = result - v3;
      v7 = v5;
      if ( v6 < 180.0 )
        break;
      v4 = v6;
      v3 = v7;
      result = v4;
    }
    return v6;
  }
  return result;
}
