float *__thiscall sub_100233A0(float *this)
{
  float *result; // eax

  result = (float *)sub_10022D70();
  *result = this[5] - this[2];
  result[1] = this[6] - this[3];
  result[2] = this[7] - this[4];
  return result;
}
