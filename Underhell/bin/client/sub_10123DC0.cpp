float *__thiscall sub_10123DC0(float *this)
{
  float *result; // eax

  sub_1003D000((int)this);
  *((_DWORD *)this + 298) = &C_SpriteRenderer::`vftable';
  *(_DWORD *)this = &C_Sprite::`vftable';
  *((_DWORD *)this + 1) = &C_Sprite::`vftable';
  *((_DWORD *)this + 2) = &C_Sprite::`vftable';
  *((_DWORD *)this + 3) = &C_Sprite::`vftable';
  *((_DWORD *)this + 298) = &C_Sprite::`vftable';
  this[302] = NAN;
  if ( *((_DWORD *)this + 312) != COERCE_INT(2.0) )
    this[312] = 2.0;
  result = this;
  if ( *((_DWORD *)this + 313) != COERCE_INT(1.0) )
    this[313] = 1.0;
  return result;
}
