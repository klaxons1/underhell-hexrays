float *__thiscall sub_100167B0(_DWORD *this)
{
  float *v2; // esi
  float *v3; // edi
  float *v4; // eax
  double v5; // st7
  float *result; // eax

  v2 = (float *)sub_1000ED40();
  v3 = (float *)sub_10015AE0(this);
  v4 = (float *)sub_100159D0(this);
  *v2 = *v4 + *v3;
  v2[1] = v4[1] + v3[1];
  v5 = v4[2];
  result = v2;
  v2[2] = v5 + v3[2];
  *v2 = *v2 * 0.5;
  v2[1] = v2[1] * 0.5;
  v2[2] = 0.5 * v2[2];
  return result;
}
