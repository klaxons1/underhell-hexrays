int __cdecl sub_101DA3B0(float *a1, float *a2)
{
  double v2; // st7

  v2 = *a1 - *a2;
  if ( v2 >= 0.0 )
    return v2 > 0.0;
  else
    return -1;
}
