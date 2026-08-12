BOOL __cdecl sub_101147C0(float *a1, float *a2, float *a3, float a4, float a5)
{
  double v5; // st6
  double v6; // st6
  double v7; // st5
  double v8; // rt1
  double v9; // st3
  double v10; // st5

  v5 = (*a3 - *a1) * *a2 + (a3[1] - a1[1]) * a2[1] + (a3[2] - a1[2]) * a2[2];
  if ( v5 > 0.0 )
  {
    v7 = a2[2] * a2[2] + *a2 * *a2 + a2[1] * a2[1];
    if ( v7 >= v5 )
      v6 = v5 / v7;
    else
      v6 = 1.0;
  }
  else
  {
    v6 = 0.0;
  }
  v8 = v6 * a2[1] + a1[1] - a3[1];
  v9 = *a2 * v6 + *a1 - *a3;
  v10 = v6 * a2[2] + a1[2] - a3[2];
  return v9 * v9 + v8 * v8 + v10 * v10 <= (a4 + a5) * (a4 + a5);
}
