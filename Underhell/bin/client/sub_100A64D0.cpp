void __cdecl sub_100A64D0(float *a1, int a2, float *a3)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7

  if ( a3 )
    *a3 = a1[1] * 0.58999997 + *a1 * 0.30000001 + a1[2] * 0.11;
  if ( a2 )
  {
    if ( *a1 == flt_10459240 && a1[1] == *(float *)&qword_10459244 && a1[2] == *((float *)&qword_10459244 + 1) )
    {
      *(float *)a2 = flt_10459240;
      *(_QWORD *)(a2 + 4) = qword_10459244;
    }
    else
    {
      if ( a1[2] >= (double)a1[1] )
        v3 = a1[2];
      else
        v3 = a1[1];
      if ( v3 >= *a1 )
      {
        if ( a1[2] >= (double)a1[1] )
          v4 = a1[2];
        else
          v4 = a1[1];
      }
      else
      {
        v4 = *a1;
      }
      v5 = 1.0 / v4;
      v6 = *a1 * v5;
      v7 = a1[1] * v5;
      v8 = v5 * a1[2];
      *(float *)a2 = v6;
      *(float *)(a2 + 4) = v7;
      *(float *)(a2 + 8) = v8;
    }
  }
}
