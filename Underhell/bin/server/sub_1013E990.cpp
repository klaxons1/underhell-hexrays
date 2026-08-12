char __thiscall sub_1013E990(float *this, float *a2, float *a3)
{
  double v4; // st6
  double v5; // st5
  double v6; // st5
  double v7; // st7

  if ( this[207] > 0.0 )
  {
    v4 = this[207] / this[210];
    v5 = this[206] * v4 * 128.0 * 0.00390625 * 0.5;
    v6 = v5 + v5;
    if ( v6 < 16.0 )
      v6 = 16.0;
    *a2 = -v6;
    a2[1] = -v6;
    a2[2] = 0.0;
    v7 = v4 * this[206];
    *a3 = v6;
    a3[1] = v6;
    a3[2] = v7;
    return 1;
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = 0.0;
    return 0;
  }
}
