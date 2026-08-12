float *__thiscall sub_100F8510(float *this)
{
  float *result; // eax

  result = this;
  this[2] = 1.0;
  *this = 0.0;
  this[1] = 0.0;
  this[7] = 0.0;
  this[3] = 0.0;
  this[4] = 0.0;
  this[6] = 0.0;
  this[8] = 0.0;
  *((_BYTE *)this + 38) = 0;
  *((_DWORD *)this + 5) = 100;
  *((_WORD *)this + 18) = 1;
  this[10] = NAN;
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = 0.0;
  this[15] = 0.0;
  *((_WORD *)this + 32) = -1;
  return result;
}
