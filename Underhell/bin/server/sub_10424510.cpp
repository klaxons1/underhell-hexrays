double __cdecl sub_10424510(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6

  *a4 = *a3 - *a2;
  a4[1] = a3[1] - a2[1];
  v4 = a3[2] - a2[2];
  a4[2] = v4;
  v5 = a4[1] * a4[1] + *a4 * *a4 + v4 * v4;
  if ( v5 >= 0.0000099999997 )
    return (a1[1] * a4[1] + a1[2] * v4 + *a1 * *a4 - (*a2 * *a4 + a2[1] * a4[1] + v4 * a2[2])) / v5;
  else
    return 0.0;
}
