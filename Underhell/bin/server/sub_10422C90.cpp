float *__cdecl sub_10422C90(float *a1, float *a2, float a3, float *a4)
{
  long double v4; // st7
  long double v5; // st7
  long double v6; // st6
  long double v7; // st4
  double v8; // st7
  long double v9; // st6
  float *result; // eax
  long double v11; // st7
  long double v12; // st6

  v4 = a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2 + a1[3] * a2[3];
  if ( v4 + 1.0 <= 0.000001 )
  {
    result = a4;
    *a4 = -a2[1];
    a4[1] = *a2;
    a4[2] = -a2[3];
    a4[3] = a2[2];
    v11 = sin((1.0 - a3) * 1.570796326794897);
    v12 = sin(1.570796326794897 * a3);
    *a4 = *a1 * v11 + *a4 * v12;
    a4[1] = a1[1] * v11 + a4[1] * v12;
    a4[2] = v11 * a1[2] + v12 * a4[2];
  }
  else
  {
    if ( 1.0 - v4 <= 0.000001 )
    {
      v9 = a3;
      v8 = 1.0 - a3;
    }
    else
    {
      v5 = acos(v4);
      v6 = 1.0 / sin(v5);
      v7 = v5;
      v8 = sin((1.0 - a3) * v5) * v6;
      v9 = v6 * sin(a3 * v7);
    }
    result = a4;
    *a4 = *a1 * v8 + *a2 * v9;
    a4[1] = a2[1] * v9 + a1[1] * v8;
    a4[2] = a2[2] * v9 + a1[2] * v8;
    a4[3] = v9 * a2[3] + v8 * a1[3];
  }
  return result;
}
