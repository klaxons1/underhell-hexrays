void __thiscall sub_100B2040(float *this, float *a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6

  v4 = a3 - (this[60] * a2[1] + *a2 * this[59] + this[61] * a2[2]);
  if ( v4 > 0.0 )
  {
    v5 = a3 * (*((float *)off_103DC81C + 4) * a4);
    if ( v5 <= v4 )
      v4 = v5;
    this[59] = *a2 * v4 + this[59];
    this[60] = v4 * a2[1] + this[60];
    this[61] = v4 * a2[2] + this[61];
  }
}
