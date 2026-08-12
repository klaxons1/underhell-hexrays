float *__cdecl sub_101F2270(float *a1, float *a2, float *a3)
{
  float *v3; // eax
  float v4; // edx
  float *result; // eax
  float v6; // [esp+0h] [ebp-18h]
  float v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2;
  if ( a2 == a3 )
    v3 = (float *)&v8;
  v6 = *v3;
  v4 = v3[1];
  v7 = v3[2];
  result = a1;
  *a3 = *a1 * v6 + a1[2] * v7 + a1[1] * v4;
  a3[1] = a1[4] * v6 + a1[5] * v4 + a1[6] * v7;
  a3[2] = v7 * a1[10] + v4 * a1[9] + v6 * a1[8];
  return result;
}
