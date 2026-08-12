int __thiscall sub_101AFF90(float *this)
{
  int result; // eax

  this[1] = 0.0;
  this[2] = 0.0;
  *((_BYTE *)this + 20) = 1;
  *((_BYTE *)this + 177) = 1;
  *this = 1.0;
  this[3] = 1.0;
  this[4] = 1.0;
  sub_10422700(this + 6);
  sub_10422700(this + 18);
  result = -256;
  this[30] = NAN;
  this[31] = NAN;
  this[32] = 0.0;
  this[33] = 0.0;
  this[34] = 0.0;
  this[35] = 0.0;
  this[36] = 0.0;
  this[37] = 0.0;
  this[38] = 0.0;
  this[39] = 0.0;
  this[40] = 0.0;
  this[41] = 0.0;
  this[42] = 0.0;
  this[43] = 0.0;
  *((_BYTE *)this + 176) = 0;
  *((_BYTE *)this + 178) = 0;
  return result;
}
