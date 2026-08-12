float *__thiscall sub_1028B800(float *this, int a2)
{
  float *result; // eax

  sub_10289D20((int)this, a2);
  *(_DWORD *)this = &CTEBeamRingPoint::`vftable';
  if ( 0.0 != this[18] )
    this[18] = 0.0;
  if ( 0.0 != this[19] )
    this[19] = 0.0;
  if ( 0.0 != this[20] )
    this[20] = 0.0;
  if ( *((_DWORD *)this + 21) != COERCE_INT(0.0) )
    this[21] = 0.0;
  result = this;
  if ( *((_DWORD *)this + 22) != COERCE_INT(0.0) )
    this[22] = 0.0;
  return result;
}
