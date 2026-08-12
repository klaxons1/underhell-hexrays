void __thiscall sub_1018AD00(float *this, float *a2, char a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st4

  if ( a2 )
  {
    if ( a3 )
    {
      v3 = this[1] - this[4];
      v4 = this[14] - this[6];
      v5 = this[2] - this[5];
      v6 = this[13] - this[6];
    }
    else
    {
      v3 = this[4] - this[1];
      v4 = this[13] - this[3];
      v5 = this[5] - this[2];
      v6 = this[14] - this[3];
    }
    *a2 = v6 * 0.0 - v5 * v4;
    a2[1] = v4 * 0.0 - v6 * v3;
    a2[2] = v3 * v5;
    off_10689714();
  }
}
