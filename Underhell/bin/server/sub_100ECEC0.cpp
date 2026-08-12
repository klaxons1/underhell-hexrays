double __thiscall sub_100ECEC0(float *this, float *a2)
{
  bool v3; // al
  double v4; // st7
  double v5; // st7
  double v6; // st6

  v3 = sub_100ECDC0(a2, (int)this);
  v4 = this[8];
  if ( v3 )
  {
    v5 = v4 - 0.2;
    v6 = 0.0;
    if ( v5 > 0.0 )
    {
LABEL_3:
      this[8] = v5;
      return this[8];
    }
  }
  else
  {
    v5 = v4 + 0.1;
    v6 = 1.0;
    if ( v5 < 1.0 )
      goto LABEL_3;
  }
  this[8] = v6;
  return this[8];
}
