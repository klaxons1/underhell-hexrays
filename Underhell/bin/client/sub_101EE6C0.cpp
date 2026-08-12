void __cdecl sub_101EE6C0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7

  v3 = *a1;
  if ( v3 < *a2 )
    *a2 = *a1;
  if ( v3 > *a3 )
    *a3 = v3;
  v4 = a1[1];
  if ( v4 < a2[1] )
    a2[1] = a1[1];
  if ( v4 > a3[1] )
    a3[1] = v4;
  v5 = a1[2];
  if ( v5 < a2[2] )
    a2[2] = a1[2];
  if ( v5 > a3[2] )
    a3[2] = v5;
}
