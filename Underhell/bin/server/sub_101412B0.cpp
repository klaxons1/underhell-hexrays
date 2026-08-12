void __cdecl sub_101412B0(int a1, int a2, float *a3, float *a4)
{
  double i; // st7
  double v5; // st5
  double v6; // rt0
  double v7; // rt1
  double v8; // st5
  double v9; // st7
  double v10; // st5

  for ( i = *a3; i > 360.0; i = i - 360.0 )
    ;
  v5 = 0.0;
  if ( i < 0.0 )
  {
    while ( 1 )
    {
      v7 = v5;
      v8 = i;
      v9 = v7;
      v10 = v8 + 360.0;
      if ( v10 >= v7 )
        break;
      v6 = v10;
      v5 = v9;
      i = v6;
    }
    *a4 = v10;
  }
  else
  {
    *a4 = i;
  }
}
