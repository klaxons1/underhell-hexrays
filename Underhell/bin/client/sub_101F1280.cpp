double __cdecl sub_101F1280(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st6
  double v7; // st7
  double v8; // st5
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = sub_101F01B0(a1, a2, a3, v10);
  if ( a4 )
    *a4 = v4;
  v5 = v4 * v10[2];
  v6 = *a1 - (v10[0] * v4 + *a2);
  v7 = a1[1] - (v4 * v10[1] + a2[1]);
  v8 = a1[2] - (v5 + a2[2]);
  return v7 * v7 + v8 * v8 + v6 * v6;
}
