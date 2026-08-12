void __cdecl sub_1025F4E0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // rt0
  double v10; // st5
  double v11; // st6
  double v12; // st7

  v3 = *a1 + *a2;
  v4 = a1[1] + a2[1];
  v5 = a2[2] + a1[2];
  if ( *a3 >= v3 )
  {
    v8 = -*a3;
    if ( v8 > v3 )
      v3 = v8;
    v9 = v5;
    v7 = v3;
    v6 = v9;
  }
  else
  {
    v6 = v5;
    v7 = *a3;
  }
  *a1 = v7 - *a2;
  if ( v4 <= a3[1] )
  {
    v10 = -a3[1];
    if ( v10 > v4 )
      v4 = v10;
  }
  else
  {
    v4 = a3[1];
  }
  a1[1] = v4 - a2[1];
  if ( v6 <= a3[2] )
  {
    v11 = -a3[2];
    if ( v11 <= v6 )
      v12 = v6 - a2[2];
    else
      v12 = v11 - a2[2];
    a1[2] = v12;
  }
  else
  {
    a1[2] = a3[2] - a2[2];
  }
}
