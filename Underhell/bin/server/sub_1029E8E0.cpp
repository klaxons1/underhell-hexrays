float *__thiscall sub_1029E8E0(float *this)
{
  this[1] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = &CAI_OperatorBehavior::`vftable';
  if ( dword_1065E6E4 != dword_10694898 )
  {
    sub_1029E1F0();
    byte_1065E6E0 = 1;
    dword_1065E6E4 = dword_10694898;
  }
  this[8] = -1.0;
  *((_BYTE *)this + 36) = 0;
  this[10] = 0.0;
  this[11] = 0.0;
  this[6] = NAN;
  this[5] = NAN;
  this[7] = NAN;
  return this;
}
