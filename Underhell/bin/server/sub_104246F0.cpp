void __cdecl sub_104246F0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st6
  double v5; // st5
  double v6; // st4
  float v7; // [esp+0h] [ebp-14h]
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_10424670(a1, a2, a3, v8, a4);
  v4 = a1[1] - v8[1];
  v5 = a1[2] - v8[2];
  v6 = *a1 - v8[0];
  v7 = v6 * v6 + v5 * v5 + v4 * v4;
  off_10689708(v7);
}
