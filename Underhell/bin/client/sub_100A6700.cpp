float *__stdcall sub_100A6700(float *a1, float a2)
{
  double v2; // st7
  long double v3; // st6
  long double v6; // st6
  float *result; // eax

  v2 = a2;
  if ( a2 == flt_1042E18C )
  {
    v6 = flt_1042E188;
  }
  else
  {
    flt_1042E18C = a2;
    v3 = __FYL2X__(0.00009999999747378752, 0.6931471805599453094) * v2 * 0.33333334 * 1.442695040888963407;
    _ST5 = v3;
    __asm { frndint }
    v6 = __FSCALE__(__F2XM1__(v3 - _ST5) + 1.0, _ST5);
    flt_1042E188 = v6;
  }
  result = a1;
  a1[6] = a1[6] * v6;
  a1[7] = a1[7] * v6;
  a1[8] = v6 * a1[8];
  a1[8] = a1[8] - v2 * 800.0;
  return result;
}
