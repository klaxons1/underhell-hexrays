double __cdecl sub_101ED750(float *a1)
{
  double v1; // st7

  v1 = a1[2] * a1[2] + a1[1] * a1[1] + *a1 * *a1;
  if ( v1 >= 1.0 )
    return 1.0 / v1;
  else
    return 1.0;
}
