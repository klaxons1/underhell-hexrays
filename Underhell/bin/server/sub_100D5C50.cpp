float *__thiscall sub_100D5C50(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax
  double v6; // st5

  v3 = *a3 - this[3];
  v4 = a3[1] - this[7];
  result = a2;
  v6 = a3[2] - this[11];
  *a2 = this[4] * v4 + *this * v3 + this[8] * v6;
  a2[1] = this[5] * v4 + this[1] * v3 + this[9] * v6;
  a2[2] = v3 * this[2] + v4 * this[6] + v6 * this[10];
  return result;
}
