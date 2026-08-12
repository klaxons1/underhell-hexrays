double __cdecl sub_104242D0(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  long double v8; // st3
  long double v9; // st4
  long double v10; // st2
  long double v11; // st1
  double v12; // st7
  char v13; // ah
  long double v14; // st4
  long double v15; // rtt
  bool v17; // c0
  float v18; // [esp+10h] [ebp-4h]

  v4 = a2;
  v5 = a4;
  if ( a4 < (double)a2 )
  {
    v5 = a2;
    a4 = a2;
  }
  v6 = a3;
  if ( a3 < v5 )
  {
    a4 = a3;
    v5 = a3;
  }
  v7 = (a1 + v5 - v4) / (v6 - v4);
  v8 = 1.0;
  v9 = v7 + v7 - 1.0;
  v10 = fabs(v9);
  if ( v10 > 0.75 )
  {
    v11 = (v10 - 0.75) * 0.80000001;
    if ( v11 >= 1.0 )
    {
      v17 = v9 > 0.0;
      v14 = 1.0;
      if ( !v17 )
        v8 = -1.0;
    }
    else
    {
      v18 = v11;
      v12 = sub_10423A00(0.75, 1.0, 0.75, 0.0, v18);
      if ( __SETP__(v13 & 5, 0) )
        v12 = -v12;
      v5 = a4;
      v6 = a3;
      v14 = 1.0;
      v8 = v12;
      v4 = a2;
    }
    v15 = v8;
    v8 = v14;
    v9 = v15;
  }
  return v4 * (v8 - (v9 + v8) * 0.5) + v6 * ((v9 + v8) * 0.5) - v5;
}
