double __cdecl sub_101F12F0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st6
  float v6[2]; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-4h]

  sub_101F0290(a1, a2, a3, v6, a4);
  v4 = a1[1] - v6[1];
  return (*a1 - v6[0]) * (*a1 - v6[0]) + v4 * v4 + (a1[2] - v7) * (a1[2] - v7);
}
