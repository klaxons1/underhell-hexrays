double __thiscall sub_10254BD0(float *this)
{
  double v2; // st6

  if ( 0.0 == this[214] )
    return this[212];
  v2 = *(float *)(dword_106B31C8 + 12) - this[216];
  if ( v2 < this[214] )
    return v2 / this[214] * (this[212] - this[215]) + this[215];
  this[214] = 0.0;
  return this[212];
}
