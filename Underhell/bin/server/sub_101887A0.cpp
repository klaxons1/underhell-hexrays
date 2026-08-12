double __cdecl sub_101887A0(float a1)
{
  double v1; // st6
  double v2; // st5
  double v3; // st7
  double v4; // rt0
  double v5; // rt1
  double v6; // st5
  double v7; // st6
  double v8; // rt2

  v1 = a1;
  v2 = 360.0;
  if ( a1 < 0.0 )
  {
    while ( 1 )
    {
      v5 = v2;
      v6 = v1 + v2;
      v7 = v5;
      if ( v6 >= 0.0 )
        break;
      v4 = v6;
      v2 = v7;
      v1 = v4;
    }
    v8 = v7;
    v1 = v6;
    v3 = v8;
  }
  else
  {
    v3 = 360.0;
  }
  for ( ; v1 > v3; v1 = v1 - v3 )
    ;
  return v1;
}
