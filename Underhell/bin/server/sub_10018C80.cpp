double __cdecl sub_10018C80(float *a1)
{
  double result; // st7
  float v2; // [esp+0h] [ebp-8h]

  v2 = a1[1] * a1[1] + *a1 * *a1;
  result = off_10689708(v2);
  if ( 0.0 == result )
  {
    a1[1] = 0.0;
    *a1 = 0.0;
  }
  else
  {
    *a1 = *a1 * (1.0 / result);
    a1[1] = 1.0 / result * a1[1];
  }
  return result;
}
