float *__thiscall sub_103D0F20(float *this, float *a2, float *a3)
{
  long double v3; // st7
  long double v4; // st6
  float *result; // eax
  long double v6; // st5
  long double v7; // st4
  long double v8; // st0

  v3 = *a3 - this[179];
  v4 = a3[1] - this[180];
  result = a2;
  v6 = a3[2] - this[181];
  v7 = v4 * v4 + v3 * v3;
  v8 = v6 * v6 + v7;
  *a2 = -((atan2(-this[210], sqrt(v8 - this[210] * this[210])) + atan2(v6, sqrt(v7))) * 57.29578);
  a2[1] = (atan2(this[209], sqrt(v8 - this[209] * this[209])) + atan2(v4, v3)) * 57.29578;
  a2[2] = 0.0;
  return result;
}
