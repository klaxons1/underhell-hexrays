float *__thiscall sub_100FAEB0(float *this, float *a2)
{
  float *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  return result;
}
