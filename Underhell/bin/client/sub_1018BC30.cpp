float *__thiscall sub_1018BC30(void *this, int a2, float *a3, float *a4)
{
  float *result; // eax
  double v6; // st7
  double v7; // st7
  float v8[3]; // [esp+8h] [ebp-18h] BYREF
  float v9[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_101EE040(a4, v9, v8, 0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1096))(this);
  result = a3;
  v6 = flt_104458B0 * 0.1;
  *a3 = v9[0] * v6 + *a3;
  a3[1] = v6 * v9[1] + a3[1];
  a3[2] = v6 * v9[2] + a3[2];
  a3[2] = 0.1 * flt_104458B0 + a3[2];
  a4[2] = flt_104458B0 * 0.5 + a4[2];
  *a4 = *a4 - flt_104458B0 * 0.40000001;
  a4[1] = a4[1] - flt_104458B4 * 0.30000001;
  v7 = flt_104458B4 * 0.80000001;
  *a3 = v8[0] * v7 + *a3;
  a3[1] = v8[1] * v7 + a3[1];
  a3[2] = v7 * v8[2] + a3[2];
  return result;
}
