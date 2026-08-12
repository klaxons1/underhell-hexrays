float *__thiscall sub_100ED450(float *this)
{
  float *result; // eax

  result = this;
  this[8] = 0.0;
  *this = 0.0;
  this[1] = 0.0;
  this[2] = 0.0;
  *((_BYTE *)this + 12) = 0;
  this[4] = NAN;
  this[5] = 0.0;
  this[6] = 0.0;
  *((_BYTE *)this + 28) = 0;
  this[9] = NAN;
  this[11] = 0.0;
  this[12] = 0.0;
  *((_WORD *)this + 20) = 0;
  this[13] = 0.0;
  this[14] = 0.0;
  this[15] = 0.0;
  *((_BYTE *)this + 64) = 0;
  return result;
}
