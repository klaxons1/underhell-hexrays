double __cdecl sub_10312DD0(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // st5
  double v7; // st6
  double v9; // st7

  v5 = a3;
  v6 = a2;
  if ( a1 <= (double)a3 )
  {
    if ( v6 <= a1 )
      v6 = a1;
    v7 = a2;
  }
  else
  {
    v7 = a2;
    v6 = a3;
  }
  if ( v5 == v7 )
  {
    if ( v6 < v5 )
      return a4;
    else
      return a5;
  }
  else
  {
    v9 = (v6 - v7) / (v5 - v7);
    return a4 + (a5 - a4) * (3.0 * (v9 * v9) - v9 * (v9 * v9 + v9 * v9));
  }
}
