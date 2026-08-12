void __stdcall sub_100E9090(float *a1)
{
  double v1; // st7
  double v2; // st7
  double v3; // st7
  double v4; // st7

  if ( a1[2] >= (double)a1[1] )
    v1 = a1[2];
  else
    v1 = a1[1];
  if ( v1 >= *a1 )
  {
    if ( a1[2] >= (double)a1[1] )
      v2 = a1[2];
    else
      v2 = a1[1];
  }
  else
  {
    v2 = *a1;
  }
  if ( v2 <= 1.0 )
  {
    *a1 = *a1 * 255.0;
    a1[1] = a1[1] * 255.0;
    v4 = 255.0 * a1[2];
  }
  else
  {
    v3 = 255.0 / v2;
    *a1 = *a1 * v3;
    a1[1] = v3 * a1[1];
    v4 = v3 * a1[2];
  }
  a1[2] = v4;
}
