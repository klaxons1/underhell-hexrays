float *__thiscall sub_101F8FA0(char *this, int a2, float a3, float *a4)
{
  float *v5; // eax
  double v6; // st7
  float *v7; // ecx
  double v8; // st5
  double v9; // st4
  float *result; // eax
  int v11[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_101F8ED0((int)this, a2, a3, (float *)v11);
  v5 = (float *)&this[68 * a2 + 136];
  v6 = *v5 * -1.0;
  v7 = (float *)&this[68 * a2];
  v8 = v5[1] * -1.0;
  v9 = v5[2];
  result = a4;
  *a4 = v7[28];
  a4[1] = v6;
  a4[2] = v7[31];
  a4[3] = *(float *)v11;
  a4[4] = v7[29];
  a4[5] = v8;
  a4[6] = v7[32];
  a4[7] = *(float *)&v11[1];
  a4[8] = v7[30];
  a4[9] = -1.0 * v9;
  a4[10] = v7[33];
  a4[11] = *(float *)&v11[2];
  return result;
}
