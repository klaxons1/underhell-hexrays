float *__thiscall sub_100BEDA0(float *this, float *a2)
{
  float *result; // eax
  double v3; // st7

  result = a2;
  v3 = this[221];
  *a2 = this[179];
  a2[1] = this[180];
  a2[2] = this[181];
  a2[2] = v3 + a2[2];
  return result;
}
