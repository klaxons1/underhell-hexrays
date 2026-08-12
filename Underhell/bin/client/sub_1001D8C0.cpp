double __cdecl sub_1001D8C0(int a1, int a2, float a3, float *a4)
{
  float *v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st6

  if ( a2 < 0 || a2 >= sub_10126D90(a1) )
    return 0.0;
  v4 = (float *)sub_10127A80(a2);
  v5 = 0.0;
  if ( 0.0 == v4[4] )
  {
    v6 = a3;
  }
  else
  {
    v6 = a3 - floor((v4[4] - (v4[3] + v4[2] + v4[4]) * 0.5 + a3) / v4[4]) * v4[4];
    v5 = 0.0;
  }
  v7 = (v6 - v4[2]) / (v4[3] - v4[2]);
  *a4 = v7;
  if ( v7 >= v5 )
  {
    v5 = 1.0;
    if ( v7 <= 1.0 )
      return (v4[3] - v4[2]) * *a4 + v4[2];
  }
  *a4 = v5;
  return (v4[3] - v4[2]) * *a4 + v4[2];
}
