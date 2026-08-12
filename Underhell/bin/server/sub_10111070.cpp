float *__thiscall sub_10111070(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a3;
  *a3 = (this[5] - this[2]) * *a2 + this[2];
  a3[1] = (this[6] - this[3]) * a2[1] + this[3];
  a3[2] = (this[7] - this[4]) * a2[2] + this[4];
  return result;
}
