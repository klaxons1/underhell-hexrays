float *__thiscall sub_101F8870(char *this, int a2, float *a3)
{
  float *v3; // eax
  float *v4; // edx
  double v5; // st7
  double v6; // st5
  double v7; // st4
  float *result; // eax

  v3 = (float *)&this[68 * a2 + 136];
  v4 = (float *)&this[68 * a2];
  v5 = *v3 * -1.0;
  v6 = v3[1] * -1.0;
  v7 = v3[2];
  result = a3;
  *a3 = v4[28];
  a3[1] = v5;
  a3[2] = v4[31];
  a3[3] = v4[22];
  a3[4] = v4[29];
  a3[5] = v6;
  a3[6] = v4[32];
  a3[7] = v4[23];
  a3[8] = v4[30];
  a3[9] = -1.0 * v7;
  a3[10] = v4[33];
  a3[11] = v4[24];
  return result;
}
