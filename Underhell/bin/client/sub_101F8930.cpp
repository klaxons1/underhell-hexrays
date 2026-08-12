float *__thiscall sub_101F8930(float *this, int a2, int a3, float *a4, float *a5, float *a6)
{
  float *result; // eax
  float *v7; // ecx

  result = &this[17 * a2];
  *a4 = result[28];
  a4[1] = result[29];
  a4[2] = result[30];
  *a5 = this[17 * a2 + 34];
  v7 = &this[17 * a2 + 34];
  a5[1] = v7[1];
  a5[2] = v7[2];
  *a6 = result[31];
  a6[1] = result[32];
  a6[2] = result[33];
  return result;
}
