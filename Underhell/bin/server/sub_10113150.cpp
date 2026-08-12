BOOL __cdecl sub_10113150(float *a1, float *a2, float *a3, float a4)
{
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st6

  v4 = 0.0;
  if ( *a1 <= (double)*a3 )
  {
    if ( *a2 >= (double)*a3 )
      goto LABEL_6;
    v5 = *a2 - *a3;
  }
  else
  {
    v5 = *a3 - *a1;
  }
  v4 = v5 * v5;
LABEL_6:
  if ( a1[1] <= (double)a3[1] )
  {
    if ( a2[1] >= (double)a3[1] )
      goto LABEL_11;
    v6 = a2[1] - a3[1];
  }
  else
  {
    v6 = a3[1] - a1[1];
  }
  v4 = v4 + v6 * v6;
LABEL_11:
  if ( a1[2] > (double)a3[2] )
  {
    v7 = a3[2] - a1[2];
LABEL_15:
    v4 = v4 + v7 * v7;
    return a4 * a4 > v4;
  }
  if ( a2[2] < (double)a3[2] )
  {
    v7 = a2[2] - a3[2];
    goto LABEL_15;
  }
  return a4 * a4 > v4;
}
