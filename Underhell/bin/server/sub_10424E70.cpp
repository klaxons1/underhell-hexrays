float *__cdecl sub_10424E70(float *a1, float *a2, float *a3)
{
  float *result; // eax
  float v4[12]; // [esp+0h] [ebp-30h] BYREF

  sub_104227F0(a2, v4);
  result = a1;
  *a3 = *a1 * v4[0] + a1[2] * v4[2] + v4[1] * a1[1];
  a3[1] = *a1 * v4[4] + a1[2] * v4[6] + v4[5] * a1[1];
  a3[2] = *a1 * v4[8] + a1[2] * v4[10] + v4[9] * a1[1];
  return result;
}
