int __thiscall sub_1017EB30(float *this, float *a2, float *a3, float *a4, float a5, float a6)
{
  float *v7; // ecx

  *(_DWORD *)this = 3;
  this[1] = *a3;
  v7 = this + 7;
  this[2] = a3[1];
  this[3] = a3[2];
  this[4] = *a2;
  this[5] = a2[1];
  this[6] = a2[2];
  *v7 = *a4;
  v7[1] = a4[1];
  v7[2] = a4[2];
  *v7 = *v7 - *a2;
  v7[1] = v7[1] - a2[1];
  v7[2] = v7[2] - a2[2];
  off_103EDFF0();
  this[11] = 5.0;
  this[15] = a5;
  this[16] = a6;
  this[10] = 0.0;
  this[12] = 1.0;
  this[13] = 0.0;
  this[14] = 0.0;
  return sub_101F32D0(this);
}
