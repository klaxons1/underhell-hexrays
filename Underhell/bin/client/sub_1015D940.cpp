float *__stdcall sub_1015D940(float *a1, float a2)
{
  float *result; // eax
  double v3; // st7
  long double v6; // st6
  long double v7; // st7
  long double v8; // st5
  long double v9; // st6

  result = a1;
  v3 = a2 * -2.3104906 * 1.442695040888963407;
  _ST6 = v3;
  __asm { frndint }
  v6 = __FSCALE__(__F2XM1__(v3 - _ST6) + 1.0, _ST6);
  v7 = v6 * a1[8];
  v8 = a1[6] * v6;
  v9 = a1[7] * v6;
  a1[6] = v8;
  a1[7] = v9;
  a1[8] = v7;
  return result;
}
