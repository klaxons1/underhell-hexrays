double __cdecl sub_10042120(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st6
  double v7; // st7
  double v8; // st6

  v5 = a3;
  if ( a3 == a2 )
  {
    if ( v5 > a1 )
      return a4;
    else
      return a5;
  }
  else
  {
    v7 = (a1 - a2) / (v5 - a2);
    v8 = 1.0;
    if ( v7 > 1.0 || (v8 = 0.0, v7 < 0.0) )
      v7 = v8;
    return a4 + (a5 - a4) * (3.0 * (v7 * v7) - v7 * (v7 * v7 + v7 * v7));
  }
}
