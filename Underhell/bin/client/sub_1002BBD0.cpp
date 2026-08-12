double __cdecl sub_1002BBD0(float a1, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st5
  double v7; // rt0
  double v8; // rt2
  double v9; // st5
  double v10; // st6
  double result; // st7

  v3 = a3;
  v4 = a2;
  v5 = 1.0;
  if ( fabs(a3 - a2) >= 0.5 )
  {
    v6 = a2;
    if ( a2 >= v3 )
      v3 = v3 + 1.0;
    else
      v6 = v6 + 1.0;
    v7 = v6;
    v5 = 1.0;
    v4 = v7;
  }
  v8 = v5;
  v9 = v4 * (v5 - a1);
  v10 = v8;
  result = v3 * a1 + v9 - (double)(int)(v3 * a1 + v9);
  if ( result < 0.0 )
    return result + v10;
  return result;
}
