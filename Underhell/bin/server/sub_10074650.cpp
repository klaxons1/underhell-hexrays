float *__thiscall sub_10074650(float *this)
{
  float *result; // eax

  result = this;
  this[4] = 0.0;
  *(_WORD *)this = -1;
  *((_WORD *)this + 1) = -1;
  *((_BYTE *)this + 14) = 0;
  this[5] = 0.0;
  this[1] = 0.0;
  this[2] = 0.0;
  *((_WORD *)this + 6) = 0;
  return result;
}
