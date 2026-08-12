void __thiscall sub_103285A0(float *this, float a2, float a3)
{
  double v4; // st7
  float v5; // [esp+0h] [ebp-Ch]

  if ( -1.0 == a3 )
    a3 = this[27];
  v5 = this[907] * this[907] + this[906] * this[906] + this[908] * this[908];
  if ( off_10689708(v5) > a3 )
  {
    off_10689714();
    this[906] = a3 * this[906];
    this[907] = this[907] * a3;
    this[908] = a3 * this[908];
  }
  if ( a2 > 0.0 )
  {
    v4 = -a2;
    if ( v4 > this[908] )
      this[908] = v4;
  }
}
