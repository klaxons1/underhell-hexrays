float *__cdecl sub_101F0FA0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st6
  float v8[3]; // [esp+0h] [ebp-3Ch] BYREF
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v4 = *a2 * -1.0;
  v5 = a2[1] * -1.0;
  v6 = -1.0 * a2[2];
  v9[0] = *a1;
  v9[4] = a1[1];
  v9[8] = a1[2];
  v9[1] = v4;
  v9[5] = v5;
  v9[9] = v6;
  v9[2] = *a3;
  v9[6] = a3[1];
  v9[10] = a3[2];
  sub_101ED7B0(v9, v8);
  return sub_101EF050(v8, a4);
}
