long double __cdecl sub_10144FD0(float a1, float a2, float a3)
{
  long double result; // st7
  long double v4; // st6
  long double v5; // st5
  long double v6; // st6
  bool v7; // c0
  bool v8; // c3

  result = a3;
  sub_10424CA0(a3);
  v4 = fabs(a3);
  if ( a1 > v4 )
    return 0.0;
  if ( a2 >= v4 )
  {
    v5 = (v4 - a1) / (a2 - a1);
    v6 = a2 * (3.0 * (v5 * v5) - v5 * (v5 * v5 + v5 * v5));
    v7 = result > 0.0;
    v8 = 0.0 == result;
    result = v6;
    if ( !v7 && !v8 )
      return v6 * -1.0;
  }
  return result;
}
