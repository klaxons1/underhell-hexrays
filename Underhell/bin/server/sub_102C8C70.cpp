float *__thiscall sub_102C8C70(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = this[1] * a3[1] + *a3 * *this + this[2] * a3[2];
  a2[1] = this[4] * *a3 + this[5] * a3[1] + this[6] * a3[2];
  a2[2] = this[8] * *a3 + this[9] * a3[1] + this[10] * a3[2];
  return result;
}
