void __thiscall sub_102197E0(float *this, int a2, int a3)
{
  double v3; // st7
  double v4; // st7

  if ( this[11] > (double)this[12] )
    this[12] = this[11];
  if ( this[13] > (double)this[14] )
    this[14] = this[13];
  if ( this[11] > (double)this[13] )
  {
    v3 = this[11];
    this[11] = this[13];
    this[13] = v3;
  }
  if ( this[12] > (double)this[14] )
  {
    v4 = this[12];
    this[12] = this[14];
    this[14] = v4;
  }
}
