float *__cdecl sub_101F26D0(float *a1, float *a2)
{
  float *result; // eax
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  *a2 = *a1;
  a2[1] = a1[4];
  a2[2] = a1[8];
  a2[4] = a1[1];
  a2[5] = a1[5];
  a2[6] = a1[9];
  a2[8] = a1[2];
  a2[9] = a1[6];
  a2[10] = a1[10];
  v3[0] = -a1[3];
  v3[1] = -a1[7];
  v3[2] = -a1[11];
  result = sub_101F2270(a2, v3, v4);
  a2[3] = v4[0];
  a2[7] = v4[1];
  a2[11] = v4[2];
  a2[14] = 0.0;
  a2[13] = 0.0;
  a2[12] = 0.0;
  a2[15] = 1.0;
  return result;
}
