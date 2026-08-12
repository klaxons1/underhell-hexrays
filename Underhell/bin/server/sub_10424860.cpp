double __cdecl sub_10424860(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  float v9[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = sub_10424750(a1, a2, a3, v9);
  if ( a4 )
    *a4 = v4;
  v5 = v4;
  v6 = *a1 - (v9[0] * v4 + *a2);
  v7 = a1[1] - (v5 * v9[1] + a2[1]);
  return v6 * v6 + v7 * v7;
}
