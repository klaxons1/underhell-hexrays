float *__cdecl sub_101F1020(float *a1, float *a2)
{
  float *result; // eax
  float *v3; // ecx
  double v4; // st7
  double v5; // st6
  float v6[12]; // [esp+0h] [ebp-30h] BYREF

  sub_101EED90(a1, v6);
  result = sub_101ED7B0(v6, a2);
  v4 = *v3 * 0.017453292;
  v5 = v3[1] * 0.017453292;
  *v3 = 0.017453292 * v3[2];
  v3[1] = v4;
  v3[2] = v5;
  return result;
}
