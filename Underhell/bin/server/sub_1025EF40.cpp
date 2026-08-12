double __cdecl sub_1025EF40(float *a1, float *a2, float a3, float a4)
{
  double v5; // st4
  double v6; // st5
  double v7; // st7
  float v8; // [esp+0h] [ebp-8h]

  if ( a4 <= 0.0 )
    return a3;
  v5 = a1[1] - a2[1];
  v6 = a1[2] - a2[2];
  v8 = v6 * v6 + v5 * v5 + (*a1 - *a2) * (*a1 - *a2);
  v7 = off_10689708(v8);
  if ( a4 < v7 )
    return (float)-1.0;
  else
    return (1.0 - v7 / a4) * a3;
}
