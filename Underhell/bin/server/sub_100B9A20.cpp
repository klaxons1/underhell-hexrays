float *__thiscall sub_100B9A20(float *this, float *a2, float a3, int a4, int a5, int a6)
{
  float *result; // eax

  this[6] = NAN;
  this[7] = NAN;
  memset(this, 0, 0x30u);
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  *((_DWORD *)this + 9) = a4;
  *((_DWORD *)this + 8) = a5;
  this[3] = a3;
  *((_DWORD *)this + 4) = a6;
  result = this;
  this[5] = -1.0;
  return result;
}
