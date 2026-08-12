float *__thiscall sub_100DA550(float *this, int a2, float a3, float *a4, float *a5)
{
  float *result; // eax

  *(_DWORD *)this = a2;
  this[1] = a3;
  this[2] = *a4;
  this[3] = a4[1];
  result = a5;
  this[4] = a4[2];
  this[5] = this[2];
  this[6] = this[3];
  this[7] = this[4];
  this[8] = 0.0;
  this[9] = 0.0;
  this[10] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = *a5;
  this[15] = a5[1];
  this[16] = a5[2];
  this[17] = 0.0;
  this[18] = 0.0;
  this[19] = 0.0;
  this[20] = 0.0;
  this[21] = 0.0;
  this[22] = 0.0;
  return result;
}
