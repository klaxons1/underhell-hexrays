float *__thiscall sub_101F8ED0(int this, int a2, float a3, float *a4)
{
  int v5; // eax
  const char *v6; // eax
  double v7; // st7
  double v8; // st6
  float *result; // eax
  double v10; // st7

  if ( a2 > *(_DWORD *)(this + 6040) )
  {
    v5 = *(_DWORD *)(this + 64);
    if ( v5 )
      v6 = (const char *)sub_1022CF00(v5 + 552);
    else
      v6 = Locale;
    DevWarning(2, "Warning : Particle system (%s) using unassigned ControlPoint %d!\n", v6, a2);
  }
  v7 = *(float *)(this + 36) - *(float *)(this + 44);
  v8 = a3;
  if ( a3 < v7 )
    v8 = v7;
  if ( 0.0 == *(float *)(this + 44) )
  {
    result = (float *)(this + 68 * a2 + 88);
    *a4 = *result;
    a4[1] = *(float *)(this + 68 * a2 + 92);
    a4[2] = *(float *)(this + 68 * a2 + 96);
  }
  else
  {
    v10 = (v8 - v7) / *(float *)(this + 44);
    result = (float *)(this + 68 * a2);
    *a4 = (result[22] - result[25]) * v10 + result[25];
    a4[1] = (result[23] - result[26]) * v10 + result[26];
    a4[2] = v10 * (result[24] - result[27]) + result[27];
  }
  return result;
}
