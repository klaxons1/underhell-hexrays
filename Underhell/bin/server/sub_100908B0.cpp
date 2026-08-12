void __thiscall sub_100908B0(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st7
  double v7; // rtt
  double v8; // st5
  double v9; // st7
  double v10; // st5

  v3 = a2;
  if ( a2 >= 0.0 )
  {
    if ( v3 < 360.0 )
    {
      v4 = 0.0;
      v5 = 360.0;
      v6 = a2;
    }
    else
    {
      v6 = v3 - 360.0;
      v5 = 360.0;
      v4 = 0.0;
    }
  }
  else
  {
    v4 = 0.0;
    v5 = 360.0;
    v6 = v3 + 360.0;
  }
  v7 = v5;
  v8 = v6;
  v9 = v7;
  *this = v8;
  v10 = a3;
  if ( v4 <= a3 )
  {
    if ( v10 < v9 )
      this[1] = a3;
    else
      this[1] = v10 - v9;
  }
  else
  {
    this[1] = v9 + v10;
  }
}
