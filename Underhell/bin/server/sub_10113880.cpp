double __cdecl sub_10113880(int a1, int a2, int a3, float a4, float a5)
{
  double v5; // st7

  v5 = (*(float *)(a2 + 4 * a3) - *(float *)(a1 + 4 * a3)) * a4;
  if ( 0.0 == v5 )
    return 0.0;
  else
    return 1.0 / v5 * (a5 - a4 * *(float *)(a1 + 4 * a3));
}
