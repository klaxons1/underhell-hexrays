int __stdcall sub_100F7980(float *a1, float *a2, float *a3, float a4)
{
  double v4; // st7
  int v5; // edi
  double v6; // st6
  double v7; // st5
  bool v8; // c0
  bool v9; // c3
  double v10; // st5
  double v11; // st3
  double v12; // st4
  int result; // eax

  v4 = a2[2];
  v5 = v4 > 0.0;
  if ( 0.0 == v4 )
    v5 |= 2u;
  v6 = (a1[1] * a2[1] + *a1 * *a2 + a1[2] * a2[2]) * a4;
  v7 = *a1 - *a2 * v6;
  *a3 = v7;
  if ( v7 <= -0.1 )
  {
    v10 = 0.1;
  }
  else
  {
    v8 = v7 > 0.1;
    v9 = 0.1 == v7;
    v10 = 0.1;
    if ( !v8 && !v9 )
      *a3 = 0.0;
  }
  v11 = a1[1] - a2[1] * v6;
  a3[1] = v11;
  if ( v11 > -0.1 && v11 < v10 )
    a3[1] = 0.0;
  v12 = a1[2] - v6 * a2[2];
  a3[2] = v12;
  if ( v12 <= -0.1 )
    return v5;
  result = v5;
  if ( v10 > v12 )
    a3[2] = 0.0;
  return result;
}
