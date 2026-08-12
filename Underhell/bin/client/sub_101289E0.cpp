int __cdecl sub_101289E0(float *a1, int a2, float *a3, float *a4, float a5)
{
  _DWORD *v5; // eax
  int result; // eax
  double v7; // st7
  double v8; // st4
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]

  a1[4] = *a4;
  a1[5] = a4[1];
  a1[6] = a4[2];
  v9 = *a3;
  v10 = a3[1];
  v11 = a3[2];
  off_103EDFEC();
  v5 = (_DWORD *)sub_101AB1E0();
  v7 = sub_10007FA0(v5, a2);
  v8 = *(float *)(dword_10438264 + 44);
  a1[1] = v9 * v7 * v8 * a5;
  a1[2] = v10 * v7 * v8 * a5;
  a1[3] = v7 * v11 * v8 * a5;
  return result;
}
