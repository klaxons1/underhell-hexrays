int __cdecl sub_100EB280(float *a1, float *a2)
{
  double v2; // st7

  v2 = a1[1] - a2[1];
  if ( 0.0 == v2 )
    return 0;
  if ( v2 <= 0.0 )
    return 1;
  return -1;
}
