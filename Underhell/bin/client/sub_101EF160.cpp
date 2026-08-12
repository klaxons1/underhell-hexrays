void __cdecl sub_101EF160(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st7

  v6 = *a3 - *a2;
  *a5 = *a1;
  a5[1] = a1[1];
  a5[2] = a1[2];
  *a6 = *a4;
  a6[1] = a4[1];
  a6[2] = a4[2];
  if ( 0.0 != v6 )
  {
    if ( *a2 != *a1 )
    {
      v7 = v6 / (*a2 - *a1);
      *a5 = (*a1 - *a2) * v7 + *a2;
      a5[1] = (a1[1] - a2[1]) * v7 + a2[1];
      a5[2] = v7 * (a1[2] - a2[2]) + a2[2];
    }
    if ( *a3 != *a4 )
    {
      v8 = *a4 - *a3;
      v9 = v6 / v8;
      *a6 = v8 * v9 + *a3;
      a6[1] = (a4[1] - a3[1]) * v9 + a3[1];
      a6[2] = v9 * (a4[2] - a3[2]) + a3[2];
    }
  }
}
