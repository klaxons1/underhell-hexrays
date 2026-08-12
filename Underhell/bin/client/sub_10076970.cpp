void __cdecl sub_10076970(float *a1)
{
  double v1; // st4
  double v2; // st5
  double v3; // st7

  if ( *a1 <= 180.0 )
  {
    if ( *a1 >= -180.0 )
      goto LABEL_6;
    v1 = *a1 + 360.0;
  }
  else
  {
    v1 = *a1 - 360.0;
  }
  *a1 = v1;
LABEL_6:
  v2 = 180.0;
  v3 = -180.0;
  if ( a1[1] <= 180.0 )
  {
    if ( a1[1] < -180.0 )
      a1[1] = a1[1] + 360.0;
    v2 = 180.0;
    v3 = -180.0;
  }
  else
  {
    a1[1] = a1[1] - 360.0;
  }
  if ( v2 >= a1[2] )
  {
    if ( v3 > a1[2] )
      a1[2] = a1[2] + 360.0;
  }
  else
  {
    a1[2] = a1[2] - 360.0;
  }
}
