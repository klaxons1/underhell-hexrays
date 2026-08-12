double __cdecl sub_100785E0(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st6
  double v7; // rt1
  double v8; // st5
  double v9; // st6
  double v10; // st5
  double v11; // rt2
  double v12; // st5
  double v13; // rtt

  v4 = a2;
  if ( a3 != a2 )
  {
    v5 = a1 * a4;
    v6 = a3 - v4;
    if ( a3 <= v4 )
    {
      if ( v6 > -180.0 )
        goto LABEL_8;
      v11 = v5;
      v12 = v6;
      v9 = v11;
      v10 = v12 + 360.0;
    }
    else
    {
      if ( v6 < 180.0 )
        goto LABEL_8;
      v7 = v5;
      v8 = v6;
      v9 = v7;
      v10 = v8 - 360.0;
    }
    v13 = v10;
    v5 = v9;
    v6 = v13;
LABEL_8:
    if ( v6 <= 0.0 )
    {
      v5 = -v5;
      if ( v5 <= v6 )
        return (double)(unsigned __int16)(int)((v4 + v6) * 182.04445) * 0.0054931641;
    }
    else if ( v5 >= v6 )
    {
      return (double)(unsigned __int16)(int)((v4 + v6) * 182.04445) * 0.0054931641;
    }
    v6 = v5;
    return (double)(unsigned __int16)(int)((v4 + v6) * 182.04445) * 0.0054931641;
  }
  return a3;
}
