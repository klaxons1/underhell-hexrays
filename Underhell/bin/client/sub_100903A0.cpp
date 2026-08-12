bool __cdecl sub_100903A0(float *a1, float *a2, float *a3, float a4, float *a5, float *a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v11; // st2
  double v12; // st2
  double v13; // st1
  double v14; // st7
  double v15; // rtt
  double v16; // st2
  double v17; // st6
  long double v18; // st5
  long double v19; // st5

  v6 = *a1 - *a3;
  v7 = a1[1] - a3[1];
  v8 = a1[2] - a3[2];
  v9 = a2[1] * a2[1] + *a2 * *a2 + a2[2] * a2[2];
  if ( 0.0 == v9 )
  {
    *a6 = 0.0;
    *a5 = 0.0;
    return a4 * a4 >= v8 * v8 + v7 * v7 + v6 * v6;
  }
  else
  {
    v11 = a2[1] * v7 + *a2 * v6 + a2[2] * v8;
    v12 = v11 + v11;
    v13 = v6 * v6;
    v14 = v12 * v12;
    v15 = v12;
    v16 = v7 * v7 + v13;
    v17 = v15;
    v18 = v14 - (v8 * v8 + v16 - a4 * a4) * (v9 * 4.0);
    if ( v18 >= 0.0 )
    {
      v19 = sqrt(v18);
      *a5 = (-v17 - v19) * (0.5 / v9);
      *a6 = 0.5 / v9 * (v19 - v17);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
