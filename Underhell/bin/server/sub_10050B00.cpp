float *__thiscall sub_10050B00(float *this)
{
  this[1] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = &CAI_FearBehavior::`vftable';
  if ( dword_106029A0 != dword_10694898 )
  {
    sub_10050600();
    byte_1060299C = 1;
    dword_106029A0 = dword_10694898;
  }
  this[8] = 0.0;
  this[9] = 0.0;
  this[10] = 0.0;
  this[11] = -1.0;
  this[12] = NAN;
  this[13] = NAN;
  sub_100502D0((int)this);
  this[11] = -1.0;
  return this;
}
