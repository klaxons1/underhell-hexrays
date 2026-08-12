void __cdecl sub_10181110(float *a1, float a2, float a3, float *a4)
{
  double v4; // st7
  float *v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  long double v9; // st4
  bool v10; // c3
  double v11; // st5
  long double v12; // st7
  long double v13; // st7

  v4 = a2;
  if ( -1.0 == a2 )
  {
    v5 = a4;
    v6 = 3.141592653589793;
    v7 = 0.0055555557;
    v8 = 0.0;
    a4[1] = 0.0;
    *a4 = 0.0;
    a4[2] = 1.0;
  }
  else if ( -2.0 == v4 )
  {
    v5 = a4;
    v6 = 3.141592653589793;
    a4[1] = 0.0;
    *a4 = 0.0;
    a4[2] = -1.0;
    v8 = 0.0;
    v7 = 0.0055555557;
  }
  else
  {
    if ( 0.0 == v4 )
      v4 = a1[1];
    v5 = a4;
    a4[2] = 0.0;
    v9 = v4 * 0.0055555557 * 3.141592653589793;
    *a4 = cos(v9);
    a4[1] = sin(v9);
    v7 = 0.0055555557;
    v8 = 0.0;
    v6 = 3.141592653589793;
  }
  v10 = a3 == v8;
  v11 = a3;
  if ( v10 )
    v11 = *a1;
  v12 = v6 * (v7 * v11);
  v5[2] = sin(v12);
  v13 = cos(v12);
  *v5 = v13 * *v5;
  v5[1] = v13 * v5[1];
}
