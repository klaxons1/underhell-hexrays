char __cdecl sub_10422A40(float a1, float a2, float a3, float *a4, float *a5)
{
  double v5; // st6
  double v6; // st7
  char result; // al
  long double v8; // st4
  long double v9; // rt1

  v5 = a1;
  if ( a1 == 0.0 )
  {
    if ( a2 != 0.0 )
    {
      v6 = -(a3 / a2);
      *a5 = v6;
      *a4 = v6;
      return 1;
    }
    if ( 0.0 == a3 )
    {
      *a5 = 0.0;
      *a4 = 0.0;
      return 1;
    }
    return 0;
  }
  v8 = a2 * a2 - v5 * a3 * 4.0;
  if ( v8 < 0.0 )
    return 0;
  result = 1;
  v9 = sqrt(v8);
  *a4 = (v9 - a2) / (v5 + v5);
  *a5 = (-a2 - v9) / (v5 + v5);
  return result;
}
