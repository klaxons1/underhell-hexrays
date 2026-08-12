void __stdcall sub_100E9120(float *a1, float *a2, float *a3, float a4, float *a5)
{
  double v5; // st3
  double v6; // st5
  double v7; // st3
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7

  if ( 0.0 != a4 )
  {
    v5 = a1[1] - a2[1];
    v6 = v5 * v5;
    v7 = *a1 - *a2;
    v8 = v6;
    v9 = a1[2] - a2[2];
    v10 = v7 * v7 + v8 + v9 * v9;
    if ( v10 <= 0.000099999997 )
      v11 = 1000.0;
    else
      v11 = a4 / v10;
    v12 = *a3 * v11;
    v13 = a3[1] * v11;
    v14 = v11 * a3[2];
    *a5 = v12 + *a5;
    a5[1] = v13 + a5[1];
    a5[2] = v14 + a5[2];
  }
}
