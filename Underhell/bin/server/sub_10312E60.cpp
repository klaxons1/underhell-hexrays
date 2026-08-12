float *__thiscall sub_10312E60(float *this, int a2, float *a3, float *a4, float *a5, float a6, int a7, char a8)
{
  float *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  this[1] = *a3;
  this[2] = a3[1];
  this[3] = a3[2];
  this[4] = *a4;
  this[5] = a4[1];
  this[6] = a4[2];
  this[7] = *a5;
  this[8] = a5[1];
  this[9] = a5[2];
  *((_DWORD *)this + 11) = a7;
  this[10] = a6;
  *((_DWORD *)this + 12) = 4;
  this[14] = 0.0;
  this[17] = 1.0;
  this[15] = 0.0;
  this[18] = 0.0;
  this[16] = 0.0;
  this[19] = 0.0;
  *((_BYTE *)this + 80) = a8;
  *((_WORD *)this + 42) = 0;
  return result;
}
