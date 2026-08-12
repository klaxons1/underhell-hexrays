int __stdcall sub_10157180(float *a1, float *a2, float *a3, float a4)
{
  double v4; // st7
  int v5; // esi
  double v6; // st6
  double v7; // st6
  int result; // eax
  double v9; // st7
  double v10; // rt1

  v4 = a2[2];
  v5 = v4 > 0.0;
  if ( 0.0 == v4 )
    v5 |= 2u;
  v6 = (a1[1] * a2[1] + *a1 * *a2 + a1[2] * a2[2]) * a4;
  *a3 = *a1 - *a2 * v6;
  a3[1] = a1[1] - a2[1] * v6;
  a3[2] = a1[2] - v6 * a2[2];
  v7 = a2[1] * a3[1] + *a2 * *a3 + a2[2] * a3[2];
  result = v5;
  if ( v7 < 0.0 )
  {
    v9 = a2[1] * v7;
    v10 = v7 * a2[2];
    *a3 = *a3 - *a2 * v7;
    a3[1] = a3[1] - v9;
    a3[2] = a3[2] - v10;
  }
  return result;
}
