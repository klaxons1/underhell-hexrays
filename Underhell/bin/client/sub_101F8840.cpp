float *__thiscall sub_101F8840(float *this, int a2, float *a3)
{
  float *result; // eax

  result = &this[17 * a2 + 25];
  *a3 = *result;
  a3[1] = this[17 * a2 + 26];
  a3[2] = this[17 * a2 + 27];
  return result;
}
