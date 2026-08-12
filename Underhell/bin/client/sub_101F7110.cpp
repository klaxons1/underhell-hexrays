float *__thiscall sub_101F7110(float *this, int a2)
{
  float *result; // eax

  result = this;
  this[6] = 100.0;
  *((_DWORD *)this + 3) = a2;
  this[7] = 0.0;
  this[8] = 0.0;
  this[2] = 0.0;
  this[10] = 0.0;
  this[1] = 0.0;
  this[11] = 0.0;
  *(_DWORD *)this = &CPotteryWheelManip::`vftable';
  this[12] = 0.0;
  this[4] = NAN;
  this[13] = 0.0;
  this[5] = NAN;
  this[14] = 0.0;
  *((_BYTE *)this + 60) = 0;
  this[9] = 100.0;
  return result;
}
