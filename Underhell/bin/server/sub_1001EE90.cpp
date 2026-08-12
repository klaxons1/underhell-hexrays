float *__thiscall sub_1001EE90(float *this, int a2, float *a3, int a4, float a5, int a6, int a7)
{
  float *result; // eax
  int v8; // ecx

  result = this;
  *(_DWORD *)this = a2;
  this[1] = *a3;
  this[2] = a3[1];
  v8 = *((_DWORD *)a3 + 2);
  result[8] = a5;
  *((_DWORD *)result + 3) = v8;
  result[9] = -1.0;
  result[4] = NAN;
  *((_DWORD *)result + 5) = a4;
  result[6] = NAN;
  result[7] = NAN;
  *((_DWORD *)result + 10) = a6;
  *((_DWORD *)result + 11) = a7;
  return result;
}
