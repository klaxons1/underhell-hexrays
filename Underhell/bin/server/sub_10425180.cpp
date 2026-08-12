void __cdecl sub_10425180(float *a1, float a2, float *a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // st7

  v3 = a2;
  v4 = 1.0 - a2;
  *a3 = *a1 * v4;
  a3[1] = a1[1] * v4;
  a3[2] = a1[2] * v4;
  v5 = v4 * a1[3];
  if ( a3[3] >= 0.0 )
    a3[3] = v5 + v3;
  else
    a3[3] = v5 - v3;
  sub_10422DC0(a3);
}
