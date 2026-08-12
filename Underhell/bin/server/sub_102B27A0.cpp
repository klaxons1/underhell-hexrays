void __cdecl sub_102B27A0(float *a1, float *a2)
{
  long double v2; // st7
  long double v3; // st6
  long double v4; // st6
  long double v5; // st6
  long double v6; // st6
  long double v7; // st6

  v2 = fabs(*a1);
  if ( v2 <= 0.0 )
    v2 = 0.0;
  v3 = fabs(*a2);
  if ( v3 > v2 )
    v2 = v3;
  v4 = fabs(a1[1]);
  if ( v4 > v2 )
    v2 = v4;
  v5 = fabs(a2[1]);
  if ( v5 > v2 )
    v2 = v5;
  v6 = fabs(a1[2]);
  if ( v6 > v2 )
    v2 = v6;
  v7 = fabs(a2[2]);
  if ( v7 > v2 )
    v2 = v7;
  *a1 = -v2;
  a1[1] = -v2;
  a1[2] = -v2;
  *a2 = v2;
  a2[1] = v2;
  a2[2] = v2;
}
