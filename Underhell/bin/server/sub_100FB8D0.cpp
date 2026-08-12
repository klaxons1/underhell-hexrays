float *__thiscall sub_100FB8D0(float *this, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st6
  double v5; // st5
  double v6; // st7

  v2 = this[27];
  result = a2;
  v4 = this[201] * v2;
  v5 = this[202] * v2;
  v6 = v2 * this[203];
  *a2 = v4;
  a2[1] = v5;
  a2[2] = v6;
  return result;
}
