double __cdecl sub_101F7DA0(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // st6
  double result; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st1
  double v12; // st4
  double v13; // st6
  double v14; // st6
  double v15; // st6

  v5 = a5;
  v6 = a1;
  if ( a1 > (double)a5 )
    return 0.0;
  if ( a4 > 0.0 && a4 < v5 )
    return 0.0;
  v8 = a4;
  v9 = a2;
  if ( a2 <= v6 )
    v9 = a1;
  v10 = a3;
  if ( a3 <= v9 )
    v10 = v9;
  if ( v10 >= v8 )
    v8 = v10;
  v11 = v9;
  v12 = 1.0;
  if ( v11 <= v5 || v11 <= v6 || (v13 = (v5 - v6) / (v11 - v6), v13 > 1.0) )
  {
    v14 = v10;
  }
  else
  {
    v12 = v13;
    v14 = v10;
  }
  result = v12;
  if ( a5 > v14 && v8 > v14 )
  {
    v15 = (a5 - v8) / (v14 - v8);
    if ( v15 <= v12 )
      return v15;
  }
  return result;
}
