float *__thiscall sub_101857C0(char *this, int a2, float *a3, float *a4)
{
  float *result; // eax

  result = (float *)&this[320 * a2 + 40];
  result[17] = *a4;
  result[18] = a4[1];
  result[19] = a4[2];
  result[14] = *a3;
  result[15] = a3[1];
  result[16] = a3[2];
  return result;
}
