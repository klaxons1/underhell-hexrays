float *__stdcall sub_1019C650(float *a1, float a2)
{
  float *result; // eax
  long double v3; // st7
  long double v6; // st6

  result = a1;
  a1[8] = a1[8] - 8.0 * a2;
  v3 = a2 * (__FYL2X__(0.8999999761581421, 0.6931471805599453094) * 33.333336) * 1.442695040888963407;
  _ST6 = v3;
  __asm { frndint }
  v6 = __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
  a1[6] = a1[6] * v6;
  a1[7] = v6 * a1[7];
  a1[8] = v6 * a1[8];
  return result;
}
