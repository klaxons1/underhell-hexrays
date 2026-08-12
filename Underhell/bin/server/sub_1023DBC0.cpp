void __thiscall sub_1023DBC0(float *this, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  long double v5; // st7

  v3 = a2;
  v4 = a2 - *this;
  if ( 0.0 == v4 || a3 <= 0.0 )
  {
    if ( *this != v3 )
      *((_BYTE *)this + 12) = 1;
    if ( v3 != this[1] )
      *((_BYTE *)this + 12) = 1;
    this[1] = a2;
    *this = a2;
    this[2] = 0.0;
  }
  else
  {
    this[1] = a2;
    v5 = fabs(v4 / a3);
    if ( v5 >= 0.1 )
      this[2] = v5;
    else
      this[2] = 0.1;
  }
}
