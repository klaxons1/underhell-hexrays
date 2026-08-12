void __thiscall sub_101F32D0(float *this)
{
  float v1; // edx
  long double v2; // st7
  long double v3; // st6
  long double v4; // st7
  long double v5; // st7

  this[19] = 0.0;
  if ( 0.0 != this[12] )
    *((_DWORD *)this + 19) = 1;
  if ( 0.0 != this[13] )
    *((_DWORD *)this + 19) |= 2u;
  if ( 0.0 != this[14] )
    *((_DWORD *)this + 19) |= 4u;
  v1 = *this;
  if ( *(_DWORD *)this == 3 )
  {
    v2 = cos(this[15]);
    this[17] = v2;
    v3 = cos(this[16]);
    this[18] = v3;
    v4 = v2 - v3;
    if ( v4 <= 1.0e-10 )
      v5 = 1.0;
    else
      v5 = 1.0 / v4;
    this[20] = v5;
  }
  if ( LODWORD(v1) == 2 )
  {
    this[4] = this[7];
    this[5] = this[8];
    this[6] = this[9];
    this[4] = this[4] * 2000000.0;
    this[5] = this[5] * 2000000.0;
    this[6] = 2000000.0 * this[6];
  }
  this[21] = this[10] * this[10];
}
