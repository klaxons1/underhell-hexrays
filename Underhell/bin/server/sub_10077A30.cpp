_DWORD *__thiscall sub_10077A30(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((float *)this + 6) = 1.75;
  v2 = this[1];
  *((float *)this + 7) = 60.0;
  this[4] = -65281;
  this[5] = v2;
  *((float *)this + 8) = flt_10689730;
  *((float *)this + 9) = flt_10689734;
  *((float *)this + 10) = flt_10689738;
  *((float *)this + 11) = flt_10689730;
  *((float *)this + 12) = flt_10689734;
  *((float *)this + 13) = flt_10689738;
  this[14] = 0;
  if ( !*this )
    *this = sub_1005D140;
  return result;
}
