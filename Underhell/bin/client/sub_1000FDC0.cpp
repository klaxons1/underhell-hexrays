float *__thiscall sub_1000FDC0(char *this)
{
  float *v1; // esi
  float *v2; // edi
  float *v3; // eax

  v1 = (float *)(this + 352);
  v2 = (float *)sub_1000ED40();
  v3 = (float *)sub_1000ED40();
  *v3 = (v1[5] - v1[2]) * 0.5 + v1[2];
  v3[1] = (v1[6] - v1[3]) * 0.5 + v1[3];
  v3[2] = 0.5 * (v1[7] - v1[4]) + v1[4];
  sub_1000EEE0(v1, v3, v2);
  return v2;
}
