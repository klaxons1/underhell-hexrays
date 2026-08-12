double __cdecl sub_101F0510(float a1, float a2, float a3)
{
  double result; // st7
  double v4; // st5
  double v5; // st6
  double v6; // st4

  result = a1;
  v4 = a2;
  v5 = a1 - a2;
  v6 = a3;
  if ( a3 < v5 )
    return v4 + v6;
  if ( -v6 > v5 )
    return v4 - v6;
  return result;
}
