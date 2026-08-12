float *__thiscall sub_1008D5B0(float *this, int a2, float *a3, float a4)
{
  int v5; // eax
  float *result; // eax

  this[18] = 0.0;
  *((_DWORD *)this + 19) = 4;
  this[20] = 0.0;
  v5 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 16);
  *((_DWORD *)this + 18) = v5;
  *((_DWORD *)this + 22) = v5;
  this[21] = 0.0;
  this[1] = *a3;
  this[2] = a3[1];
  result = this;
  this[3] = a3[2];
  *(_DWORD *)this = a2;
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  this[10] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[16] = 0.0;
  this[14] = a4;
  this[25] = 0.0;
  this[24] = 0.0;
  this[17] = 0.0;
  this[23] = 0.0;
  *((_DWORD *)this + 15) = 2;
  return result;
}
