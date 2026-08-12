double __cdecl sub_10425220(float *a1, float *a2)
{
  long double v2; // st7
  float v4[4]; // [esp+0h] [ebp-20h] BYREF
  float v5; // [esp+10h] [ebp-10h] BYREF
  float v6; // [esp+14h] [ebp-Ch]
  float v7; // [esp+18h] [ebp-8h]

  v4[0] = -*a2;
  v4[1] = -a2[1];
  v4[2] = -a2[2];
  v4[3] = a2[3];
  sub_10422EC0(a1, v4, &v5);
  v2 = asin(sqrt(v7 * v7 + v6 * v6 + v5 * v5));
  return (v2 + v2) * 57.29578;
}
