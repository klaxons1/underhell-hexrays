float *__thiscall sub_101591E0(int this, float *a2, int a3, int a4, int a5)
{
  float *result; // eax
  double v6; // rt1
  double v7; // st6

  result = a2;
  v6 = (double)a4 / (double)(*(_DWORD *)(this + 7556) - 1) * *(float *)(this + 7564) * 2.0 - *(float *)(this + 7564);
  v7 = 2.0 * ((double)a5 / (double)(*(_DWORD *)(this + 7560) - 1) * *(float *)(this + 7564)) - *(float *)(this + 7564);
  *a2 = (double)a3 / (double)(*(_DWORD *)(this + 7552) - 1) * *(float *)(this + 7564) * 2.0
      - *(float *)(this + 7564)
      + *(float *)(this + 1432);
  a2[1] = v6 + *(float *)(this + 1436);
  a2[2] = v7 + *(float *)(this + 1440);
  return result;
}
