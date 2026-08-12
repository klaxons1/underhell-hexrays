float *__thiscall sub_100EB600(float *this, float *a2, float *a3)
{
  float *result; // eax

  *a2 = this[20];
  a2[1] = this[21];
  a2[2] = this[22];
  result = a3;
  *a3 = this[23];
  a3[1] = this[24];
  a3[2] = this[25];
  return result;
}
