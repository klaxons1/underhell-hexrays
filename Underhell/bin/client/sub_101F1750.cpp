float *__cdecl sub_101F1750(float *a1, float *a2, float *a3)
{
  float *result; // eax
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = a1[1] * 57.29578;
  v4[1] = a1[2] * 57.29578;
  v4[2] = 57.29578 * *a1;
  sub_101EE440(v4, a3);
  result = a2;
  a3[3] = *a2;
  a3[7] = a2[1];
  a3[11] = a2[2];
  return result;
}
