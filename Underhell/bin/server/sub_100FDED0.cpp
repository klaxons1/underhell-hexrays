float *__thiscall sub_100FDED0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = this[1] * a3[2] - a3[1] * this[2];
  a2[1] = *a3 * this[2] - *this * a3[2];
  a2[2] = a3[1] * *this - this[1] * *a3;
  return result;
}
