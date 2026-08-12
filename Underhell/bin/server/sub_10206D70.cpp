void __cdecl sub_10206D70(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7

  if ( *a3 <= (double)*a1 )
    v6 = *a3;
  else
    v6 = *a1;
  *a5 = v6;
  if ( a3[1] <= (double)a1[1] )
    v7 = a3[1];
  else
    v7 = a1[1];
  a5[1] = v7;
  if ( a3[2] <= (double)a1[2] )
    v8 = a3[2];
  else
    v8 = a1[2];
  a5[2] = v8;
  if ( *a4 >= (double)*a2 )
    v9 = *a4;
  else
    v9 = *a2;
  *a6 = v9;
  if ( a4[1] >= (double)a2[1] )
    v10 = a4[1];
  else
    v10 = a2[1];
  a6[1] = v10;
  if ( a4[2] >= (double)a2[2] )
    a6[2] = a4[2];
  else
    a6[2] = a2[2];
}
