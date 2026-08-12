void __cdecl sub_100BCAB0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st7

  if ( *a2 <= (double)*a1 )
    v3 = *a2;
  else
    v3 = *a1;
  *a3 = v3;
  if ( a2[1] <= (double)a1[1] )
    v4 = a2[1];
  else
    v4 = a1[1];
  a3[1] = v4;
  if ( a2[2] <= (double)a1[2] )
    a3[2] = a2[2];
  else
    a3[2] = a1[2];
}
