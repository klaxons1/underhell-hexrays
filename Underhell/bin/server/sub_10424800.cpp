void __cdecl sub_10424800(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  float v7; // [esp+0h] [ebp-14h]
  float v8[2]; // [esp+Ch] [ebp-8h] BYREF

  v4 = sub_10424750(a1, a2, a3, v8);
  if ( a4 )
    *a4 = v4;
  v5 = a1[1] - (v4 * v8[1] + a2[1]);
  v6 = *a1 - (v8[0] * v4 + *a2);
  v7 = v6 * v6 + v5 * v5;
  off_10689708(v7);
}
