float *__stdcall sub_10197570(float *a1, float a2)
{
  float *result; // eax
  long double v3; // st7
  long double v6; // st6

  result = a1;
  a1[8] = 64.0 * a2 + a1[8];
  v3 = a2 * (__FYL2X__(0.800000011920929, 0.6931471805599453094) * 20.0) * 1.442695040888963407;
  _ST6 = v3;
  __asm { frndint }
  v6 = __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
  a1[6] = a1[6] * v6;
  a1[7] = a1[7] * v6;
  a1[8] = v6 * a1[8];
  return result;
}
