float *__stdcall sub_10313DB0(float *a1, float *a2, float a3)
{
  float *result; // eax
  double v4; // st7
  int v5[3]; // [esp+4h] [ebp-10h] BYREF
  float v6; // [esp+10h] [ebp-4h]

  v6 = *(float *)(dword_106E3614 + 44);
  sub_101FB4C0((float *)v5, a2, a3);
  result = a1;
  v4 = v6;
  *a1 = *(float *)v5 * v6;
  a1[1] = *(float *)&v5[1] * v4;
  a1[2] = v4 * *(float *)&v5[2];
  return result;
}
