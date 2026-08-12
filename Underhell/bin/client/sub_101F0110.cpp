void __cdecl sub_101F0110(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st7

  if ( *a2 >= (double)*a3 )
  {
    if ( *a1 <= (double)*a3 )
      v4 = *a3;
    else
      v4 = *a1;
  }
  else
  {
    v4 = *a2;
  }
  *a4 = v4;
  if ( a2[1] >= (double)a3[1] )
  {
    if ( a1[1] <= (double)a3[1] )
      v5 = a3[1];
    else
      v5 = a1[1];
  }
  else
  {
    v5 = a2[1];
  }
  a4[1] = v5;
  if ( a2[2] >= (double)a3[2] )
  {
    if ( a1[2] <= (double)a3[2] )
      a4[2] = a3[2];
    else
      a4[2] = a1[2];
  }
  else
  {
    a4[2] = a2[2];
  }
}
