void __cdecl sub_101EEBE0(float *a1, float a2, float *a3)
{
  long double v4; // st7
  long double v5; // st7
  long double v6; // st6
  long double v7; // st7
  double v8; // st7
  int v9; // [esp+8h] [ebp+4h]

  v4 = sqrt(a1[2] * a1[2] + a1[1] * a1[1] + *a1 * *a1);
  *(float *)&v9 = v4;
  if ( v4 >= 1.0 )
  {
    v4 = 1.0;
    *(float *)&v9 = 1.0;
  }
  v5 = sin(asin(v4) * a2);
  v6 = v5 / (*(float *)&v9 + 0.00000011920929);
  *a3 = *a1 * v6;
  a3[1] = v6 * a1[1];
  a3[2] = v6 * a1[2];
  v7 = 1.0 - v5 * v5;
  if ( v7 < 0.0 )
    v7 = 0.0;
  v8 = sqrt(v7);
  if ( a1[3] < 0.0 )
    v8 = -v8;
  a3[3] = v8;
}
