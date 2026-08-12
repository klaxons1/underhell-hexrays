BOOL __thiscall sub_1001F180(float *this, float *a2, float *a3)
{
  BOOL result; // eax

  this[4] = *a3 - *a2;
  this[5] = a3[1] - a2[1];
  this[6] = a3[2] - a2[2];
  result = 0.0 != this[5] * this[5] + this[4] * this[4] + this[6] * this[6];
  *((_BYTE *)this + 65) = result;
  this[14] = 0.0;
  this[13] = 0.0;
  this[12] = 0.0;
  *((_BYTE *)this + 64) = 1;
  this[10] = 0.0;
  this[9] = 0.0;
  this[8] = 0.0;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
