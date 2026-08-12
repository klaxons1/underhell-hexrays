float *__stdcall sub_100F2D60(float *a1, unsigned __int8 *a2)
{
  float v2; // edx
  float *result; // eax
  int v4; // [esp+Ch] [ebp+Ch]

  if ( (dword_10435DD8 & 1) == 0 )
    dword_10435DD8 |= 1u;
  flt_10435DCC = (double)a2[48] * 0.0039215689;
  flt_10435DD0 = (double)a2[49] * 0.0039215689;
  v2 = flt_10435DD0;
  v4 = a2[50];
  result = a1;
  *a1 = flt_10435DCC;
  a1[1] = v2;
  flt_10435DD4 = 0.0039215689 * (double)v4;
  a1[2] = flt_10435DD4;
  return result;
}
