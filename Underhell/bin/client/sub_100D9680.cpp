float *__thiscall sub_100D9680(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = this[13];
  *a3 = this[14];
  this[13] = 0.0;
  this[14] = 0.0;
  return result;
}
