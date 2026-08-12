float *__cdecl sub_10422BE0(float *a1, float *a2, float *a3)
{
  double v3; // st5
  double v4; // st3
  double v5; // st7
  double v6; // st3
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st4
  double v11; // st2
  double v12; // st6
  double v13; // st2
  double v14; // st5
  double v15; // st4
  float *result; // eax

  v3 = a1[2] - a2[2];
  v4 = *a1 - *a2;
  v5 = v4 * v4;
  v6 = a1[1] - a2[1];
  v7 = v6 * v6 + v5 + v3 * v3;
  v8 = a1[3] - a2[3];
  v9 = v8 * v8 + v7;
  v10 = a1[2] + a2[2];
  v11 = *a1 + *a2;
  v12 = v11 * v11;
  v13 = a1[1] + a2[1];
  v14 = v13 * v13 + v12 + v10 * v10;
  v15 = a1[3] + a2[3];
  result = a3;
  if ( v15 * v15 + v14 >= v9 )
  {
    if ( a3 != a2 )
    {
      *a3 = *a2;
      a3[1] = a2[1];
      a3[2] = a2[2];
      a3[3] = a2[3];
    }
  }
  else
  {
    *a3 = -*a2;
    a3[1] = -a2[1];
    a3[2] = -a2[2];
    a3[3] = -a2[3];
  }
  return result;
}
