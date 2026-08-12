float *__cdecl sub_10424D60(float *a1, float *a2, float *a3)
{
  double v3; // st7
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  float *v7; // edx
  float *result; // eax

  v3 = *a1 + a1[5] + a1[10] + 1.0;
  if ( v3 <= 1.0000001 )
  {
    if ( a1[5] >= (double)*a1 || a1[10] >= (double)*a1 )
    {
      v4 = a2;
      if ( a1[10] >= (double)a1[5] )
      {
        v6 = a1[10] + 1.0 - *a1 - a1[5];
        *a2 = a1[8] + a1[2];
        a2[1] = a1[9] + a1[6];
        a2[2] = v6;
        v3 = a1[4] - a1[1];
      }
      else
      {
        v5 = a1[5] + 1.0 - *a1 - a1[10];
        *a2 = a1[4] + a1[1];
        a2[1] = v5;
        a2[2] = a1[9] + a1[6];
        v3 = a1[2] - a1[8];
      }
    }
    else
    {
      v4 = a2;
      *a2 = *a1 + 1.0 - a1[5] - a1[10];
      a2[1] = a1[4] + a1[1];
      a2[2] = a1[8] + a1[2];
      v3 = a1[9] - a1[6];
    }
  }
  else
  {
    v4 = a2;
    *a2 = a1[9] - a1[6];
    a2[1] = a1[2] - a1[8];
    a2[2] = a1[4] - a1[1];
  }
  v4[3] = v3;
  sub_10422DC0(v4);
  result = a3;
  *a3 = v7[3];
  a3[1] = v7[7];
  a3[2] = v7[11];
  return result;
}
