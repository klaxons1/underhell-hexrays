void __cdecl sub_101F0E00(float *a1, float *a2, float a3, float *a4)
{
  double v4; // st6
  long double v5; // st6
  long double v6; // st7

  v4 = 1.0 - a3;
  *a4 = *a1 * v4 + *a2 * a3;
  a4[1] = a1[1] * v4 + a2[1] * a3;
  a4[2] = a1[2] * v4 + a2[2] * a3;
  a4[3] = v4 * a1[3] + a3 * a2[3];
  v5 = a4[3] * a4[3] + a4[2] * a4[2] + a4[1] * a4[1] + *a4 * *a4;
  if ( 0.0 != v5 )
  {
    v6 = 1.0 / sqrt(v5);
    a4[3] = a4[3] * v6;
    a4[2] = a4[2] * v6;
    a4[1] = v6 * a4[1];
    *a4 = v6 * *a4;
  }
}
