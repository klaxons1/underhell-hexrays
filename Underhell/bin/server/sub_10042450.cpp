float *__thiscall sub_10042450(float *this, float *a2, int a3, float a4, int a5, int a6)
{
  float *result; // eax
  int v7; // ecx

  result = this;
  *(_DWORD *)this = 4;
  this[1] = *a2;
  this[2] = a2[1];
  v7 = *((_DWORD *)a2 + 2);
  result[8] = a4;
  *((_DWORD *)result + 3) = v7;
  result[9] = -1.0;
  result[4] = NAN;
  *((_DWORD *)result + 5) = a3;
  result[6] = NAN;
  result[7] = NAN;
  *((_DWORD *)result + 10) = a5;
  *((_DWORD *)result + 11) = a6;
  return result;
}
