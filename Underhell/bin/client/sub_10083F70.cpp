int __stdcall sub_10083F70(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  *a1 = *a4;
  a1[4] = a4[1];
  a1[8] = a4[2];
  a1[1] = *a5;
  a1[5] = a5[1];
  a1[9] = a5[2];
  a1[2] = *a3;
  a1[6] = a3[1];
  a1[10] = a3[2];
  a1[3] = *a2;
  a1[7] = a2[1];
  a1[11] = a2[2];
  a1[14] = 0.0;
  a1[13] = 0.0;
  a1[12] = 0.0;
  a1[15] = 1.0;
  return sub_101F1AF0(a1, a1);
}
