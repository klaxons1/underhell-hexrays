void __stdcall sub_100431B0(float *a1, int a2)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  double v5; // st5

  if ( *a1 <= 3000.0 )
  {
    if ( *a1 >= -3000.0 )
      v2 = *a1;
    else
      v2 = -3000.0;
  }
  else
  {
    v2 = 3000.0;
  }
  *a1 = v2;
  v3 = 3000.0;
  v4 = -3000.0;
  if ( a1[1] <= 3000.0 )
  {
    if ( a1[1] >= -3000.0 )
      v5 = a1[1];
    else
      v5 = -3000.0;
    v4 = -3000.0;
    v3 = 3000.0;
  }
  else
  {
    v5 = 3000.0;
  }
  a1[1] = v5;
  if ( v3 >= a1[2] )
  {
    if ( v4 <= a1[2] )
      v4 = a1[2];
    a1[2] = v4 + 800.0;
  }
  else
  {
    a1[2] = v3 + 800.0;
  }
}
