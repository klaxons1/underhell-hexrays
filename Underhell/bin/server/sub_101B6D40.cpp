int __stdcall sub_101B6D40(int a1, int a2, float *a3, float *a4)
{
  float v5[21]; // [esp+0h] [ebp-54h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[3] = *a3;
  v5[4] = a3[1];
  v5[5] = a3[2];
  v5[9] = *a3 * *a4 + a3[1] * a4[1] + a4[2] * a3[2];
  v5[6] = *a4;
  v5[7] = a4[1];
  v5[8] = a4[2];
  return sub_101C5F60(a2, v5);
}
