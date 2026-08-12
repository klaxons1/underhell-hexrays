double __thiscall sub_100BF850(float *this, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st2
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double result; // st7
  double v13; // st6
  double v14; // st6
  double v15; // st7

  v4 = this[2050] - this[2049];
  v5 = this[2049];
  v6 = a2;
  v7 = a2 + a3;
  if ( v7 <= 0.001 )
  {
    v9 = 0.001;
LABEL_12:
    v15 = a4;
    if ( a4 <= v9 || v5 >= v15 )
      return 1.0;
    result = v5 / v15;
    v14 = 1.0;
    if ( result > 1.0 )
      return v14;
    goto LABEL_7;
  }
  v8 = v7;
  v9 = 0.001;
  if ( v8 <= v4 )
    goto LABEL_12;
  v10 = a3;
  v11 = v4;
  if ( v4 < v6 )
    return 0.0;
  result = 1.0;
  if ( v10 > 0.001 )
  {
    result = 1.0;
    v13 = (v11 - v6) / v10;
    if ( v13 <= 1.0 )
    {
      result = v13;
LABEL_7:
      v14 = 0.0;
      if ( result < 0.0 )
        return v14;
    }
  }
  return result;
}
