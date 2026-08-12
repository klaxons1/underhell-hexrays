double __cdecl sub_1002BE10(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st4
  double v8; // rt0
  double v9; // st3
  double v10; // st5
  double v11; // st5
  double v12; // st6
  double v13; // st5
  double v14; // st3
  double v15; // st7
  double result; // st7

  v4 = a3;
  v5 = a2;
  v6 = 1.0;
  if ( fabs(a3 - a2) > 0.5 )
  {
    v7 = a2;
    if ( a2 >= v4 )
    {
      v4 = v4 + 1.0;
    }
    else
    {
      v7 = v7 + 1.0;
      a2 = v7;
    }
    v8 = v7;
    v6 = 1.0;
    v5 = v8;
  }
  v9 = a4;
  if ( fabs(a4 - v4) <= 0.5 )
  {
    v10 = v6;
  }
  else
  {
    if ( v9 <= v4 )
    {
      v12 = v6;
      a4 = v9 + v6;
      goto LABEL_15;
    }
    v4 = v4 + v6;
    v10 = v6;
    if ( fabs(v4 - v5) > 0.5 )
    {
      v11 = v5;
      v12 = v6;
      if ( v11 >= v4 )
        v4 = v4 + v6;
      else
        a2 = v11 + v6;
      goto LABEL_15;
    }
  }
  v12 = v10;
LABEL_15:
  v13 = a1;
  v14 = v13 * v13 * v13;
  v15 = (a4 - v4) * (v14 - v13 * v13)
      + (v13 + v14 - (v13 * v13 + v13 * v13)) * (v4 - a2)
      + (v13 * v13 * 3.0 - (v14 + v14)) * a4
      + (v12 + v14 + v14 - v13 * v13 * 3.0) * v4;
  result = v15 - (double)(int)v15;
  if ( result < 0.0 )
    return result + 1.0;
  return result;
}
