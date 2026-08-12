float *__thiscall sub_10056540(float *this)
{
  float *result; // eax

  result = (float *)sub_1000ED40();
  *result = this[5] - this[2];
  result[1] = this[6] - this[3];
  result[2] = this[7] - this[4];
  return result;
}
