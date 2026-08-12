float *__thiscall sub_10328520(float *this, float a2, float *a3, float a4, float a5, float a6)
{
  float *result; // eax
  long double v7; // st6
  long double v10; // st6
  double v11; // st5

  result = a3;
  v7 = __FYL2X__(a6, 0.6931471805599453094) * a2 * 1.442695040888963407;
  _ST5 = v7;
  __asm { frndint }
  v10 = __FSCALE__(__F2XM1__(v7 - _ST5) + 1.0, _ST5);
  v11 = a2 * a4;
  this[906] = this[906] * v10 + *a3 * v11;
  this[907] = v11 * a3[1] + v10 * this[907];
  this[908] = a2 * a5 * a3[2] + v10 * this[908];
  return result;
}
