float *__thiscall sub_100D8750(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  *a2 = this[1];
  a2[1] = this[2];
  a2[2] = this[3];
  return result;
}
