float *__cdecl sub_101EDB90(float *a1, float *a2)
{
  float *result; // eax
  double v3; // st6
  double v4; // st7
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_101EDAE0(a1, v5, v6);
  result = a2;
  *a2 = *a1;
  a2[4] = a1[1];
  a2[8] = a1[2];
  v3 = -v5[1];
  v4 = -v5[2];
  a2[1] = -v5[0];
  a2[5] = v3;
  a2[9] = v4;
  a2[2] = v6[0];
  a2[6] = v6[1];
  a2[10] = v6[2];
  return result;
}
