double __thiscall sub_1018AD70(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st7
  double v9; // rt1
  double v10; // st4
  double v11; // st6
  double v12; // st5
  double v13; // st6

  v2 = this[4] - this[1];
  v3 = this[5] - this[2];
  v4 = 0.0;
  if ( 0.0 == v2 || 0.0 == v3 )
    return this[13];
  v5 = (*a2 - this[1]) / v2;
  v6 = (a2[1] - this[2]) / v3;
  v7 = 1.0;
  if ( v5 >= 0.0 )
  {
    if ( v5 <= 1.0 )
      v7 = v5;
    v8 = 1.0;
  }
  else
  {
    v8 = 1.0;
    v7 = 0.0;
  }
  v9 = v7;
  v10 = v6;
  v11 = v9;
  if ( v10 < 0.0 || (v4 = v10, v10 <= v8) )
    v8 = v4;
  v12 = v11 * (this[6] - this[14]);
  v13 = (this[13] - this[3]) * v11 + this[3];
  return v8 * (v12 + this[14] - v13) + v13;
}
