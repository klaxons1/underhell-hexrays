float *__thiscall sub_10159B90(float *this, float *a2, float *a3)
{
  double v3; // st6
  float *result; // eax
  double v5; // st7

  v3 = this[359] + a2[4];
  result = a3;
  v5 = this[360] + a2[5];
  *a3 = this[358] + a2[3];
  a3[1] = v3;
  a3[2] = v5;
  return result;
}
