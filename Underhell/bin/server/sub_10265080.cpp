double __cdecl sub_10265080(float *a1)
{
  float v2; // [esp+0h] [ebp-8h]

  if ( 0.0 == a1[1] && 0.0 == *a1 )
  {
    if ( a1[2] >= 0.0 )
      return -180.0;
    else
      return 180.0;
  }
  else
  {
    v2 = a1[1] * a1[1] + *a1 * *a1;
    return atan2(-a1[2], off_10689708(v2)) * 57.29578;
  }
}
