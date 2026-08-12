int __cdecl sub_10248070(float *a1, int a2, float *a3, float *a4, float a5)
{
  _DWORD *v5; // eax
  int result; // eax
  double v7; // st7
  double v8; // st4
  int v9; // [esp-4h] [ebp-14h]
  float v10; // [esp+4h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  a1[4] = *a4;
  a1[5] = a4[1];
  a1[6] = a4[2];
  v10 = *a3;
  v11 = a3[1];
  v12 = a3[2];
  off_10689714();
  v5 = (_DWORD *)sub_102D9B20(a2);
  v7 = sub_100B9E60(v5, v9);
  v8 = *(float *)(dword_106C629C + 44);
  a1[1] = v10 * v7 * v8 * a5;
  a1[2] = v11 * v7 * v8 * a5;
  a1[3] = v7 * v12 * v8 * a5;
  return result;
}
