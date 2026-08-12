double __cdecl sub_101EEB80(float *a1)
{
  double result; // st7

  result = a1[3] * a1[3] + a1[2] * a1[2] + a1[1] * a1[1] + *a1 * *a1;
  if ( 0.0 != result )
  {
    result = sqrt(result);
    a1[3] = 1.0 / result * a1[3];
    a1[2] = 1.0 / result * a1[2];
    a1[1] = a1[1] * (1.0 / result);
    *a1 = 1.0 / result * *a1;
  }
  return result;
}
