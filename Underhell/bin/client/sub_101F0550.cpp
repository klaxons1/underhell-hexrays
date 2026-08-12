double __cdecl sub_101F0550(float a1, float a2, float a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // st5
  double v6; // st4
  double v7; // rt2
  double v8; // st4
  double v9; // st5
  double v10; // st4
  bool v11; // c0
  double v12; // rtt

  v3 = (double)(unsigned __int16)(int)(a1 * 182.04445) * 0.0054931641;
  v4 = 0.0054931641 * (double)(unsigned __int16)(int)(182.04445 * a2);
  v5 = v3 - v4;
  v6 = a3;
  if ( a3 < 0.0 )
    v6 = -v6;
  if ( v5 >= -180.0 )
  {
    v11 = v5 > 180.0;
    v12 = v6;
    v10 = v5;
    v9 = v12;
    if ( v11 )
      v10 = v10 - 360.0;
  }
  else
  {
    v7 = v6;
    v8 = v5;
    v9 = v7;
    v10 = v8 + 360.0;
  }
  if ( v10 > v9 )
    return v4 + v9;
  if ( -v9 <= v10 )
    return v3;
  return v4 - v9;
}
