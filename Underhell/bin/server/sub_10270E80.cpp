long double __cdecl sub_10270E80(float a1, float a2, float a3, _DWORD *a4)
{
  long double result; // st7
  long double v5; // st6
  long double v6; // st5
  long double v7; // st6
  bool v8; // c0
  bool v9; // c3

  result = a3;
  sub_10424CA0(a3);
  v5 = fabs(a3);
  if ( a1 <= v5 )
  {
    if ( a2 < v5 )
    {
      if ( a4 )
        *a4 = 2;
    }
    else
    {
      v6 = (v5 - a1) / (a2 - a1);
      v7 = a2 * (3.0 * (v6 * v6) - v6 * (v6 * v6 + v6 * v6));
      v8 = result > 0.0;
      v9 = 0.0 == result;
      result = v7;
      if ( !v8 && !v9 )
        result = v7 * -1.0;
      if ( a4 )
        *a4 = 1;
    }
  }
  else
  {
    if ( a4 )
      *a4 = 0;
    return 0.0;
  }
  return result;
}
