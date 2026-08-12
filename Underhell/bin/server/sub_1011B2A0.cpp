float *__thiscall sub_1011B2A0(float *this, float *a2, float *a3)
{
  double v3; // st7
  float *result; // eax
  double v5; // st6
  double v6; // st5

  *this = *a2;
  this[1] = a2[1];
  v3 = a2[2];
  result = a3;
  this[2] = a2[2];
  v5 = result[1] * this[1] + *result * *this;
  v6 = a3[2];
  *((_BYTE *)this + 16) = 1;
  this[3] = v3 * v6 + v5;
  return result;
}
