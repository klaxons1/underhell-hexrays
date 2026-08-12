float *__thiscall sub_1029D560(float *this)
{
  this[1] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = &CAI_FuncTankBehavior::`vftable';
  if ( dword_1065E4E8 != dword_10694898 )
  {
    sub_1029CFA0();
    byte_1065E4E4 = 1;
    dword_1065E4E8 = dword_10694898;
  }
  this[5] = NAN;
  this[7] = 0.0;
  *((_BYTE *)this + 24) = 0;
  *((_BYTE *)this + 32) = 0;
  return this;
}
