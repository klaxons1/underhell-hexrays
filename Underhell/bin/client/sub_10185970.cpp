float *__thiscall sub_10185970(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = (*a3 - this[1579]) / this[1582];
  a2[1] = -((a3[1] - this[1580]) / this[1582]);
  return result;
}
