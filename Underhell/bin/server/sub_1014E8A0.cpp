float *__thiscall sub_1014E8A0(float *this, int a2)
{
  float *result; // eax

  sub_10282320(a2);
  this[3] = 0.0;
  this[4] = 0.0;
  this[5] = 0.0;
  *(_DWORD *)this = &CTEDust::`vftable';
  if ( *((_DWORD *)this + 6) != COERCE_INT(1.0) )
    this[6] = 1.0;
  if ( *((_DWORD *)this + 7) != COERCE_INT(1.0) )
    this[7] = 1.0;
  if ( 0.0 != this[8] )
    this[8] = 0.0;
  if ( 0.0 != this[9] )
    this[9] = 0.0;
  result = this;
  if ( 0.0 != this[10] )
    this[10] = 0.0;
  return result;
}
