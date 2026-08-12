BOOL __thiscall sub_1001F200(float *this, float *a2, float *a3, float *a4, float *a5)
{
  BOOL result; // eax

  this[4] = *a3 - *a2;
  this[5] = a3[1] - a2[1];
  this[6] = a3[2] - a2[2];
  *((_BYTE *)this + 65) = 0.0 != this[5] * this[5] + this[4] * this[4] + this[6] * this[6];
  this[12] = *a5 - *a4;
  this[13] = a5[1] - a4[1];
  this[14] = a5[2] - a4[2];
  this[12] = this[12] * 0.5;
  this[13] = this[13] * 0.5;
  this[14] = this[14] * 0.5;
  result = this[13] * this[13] + this[12] * this[12] + this[14] * this[14] < 0.000001;
  *((_BYTE *)this + 64) = result;
  this[8] = *a4 + *a5;
  this[9] = a4[1] + a5[1];
  this[10] = a4[2] + a5[2];
  this[8] = this[8] * 0.5;
  this[9] = this[9] * 0.5;
  this[10] = 0.5 * this[10];
  *this = *a2 + this[8];
  this[1] = this[9] + a2[1];
  this[2] = a2[2] + this[10];
  this[8] = this[8] * -1.0;
  this[9] = this[9] * -1.0;
  this[10] = -1.0 * this[10];
  return result;
}
