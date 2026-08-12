double __cdecl sub_104243D0(float *a1, float *a2, float *a3)
{
  double result; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st6

  result = 0.0;
  if ( *a1 <= (double)*a3 )
  {
    if ( *a2 >= (double)*a3 )
      goto LABEL_6;
    v4 = *a3 - *a2;
  }
  else
  {
    v4 = *a1 - *a3;
  }
  result = v4 * v4;
LABEL_6:
  if ( a1[1] <= (double)a3[1] )
  {
    if ( a2[1] >= (double)a3[1] )
      goto LABEL_11;
    v5 = a3[1] - a2[1];
  }
  else
  {
    v5 = a1[1] - a3[1];
  }
  result = result + v5 * v5;
LABEL_11:
  if ( a1[2] <= (double)a3[2] )
  {
    if ( a2[2] < (double)a3[2] )
    {
      v7 = a3[2] - a2[2];
      return result + v7 * v7;
    }
  }
  else
  {
    v6 = a1[2] - a3[2];
    return result + v6 * v6;
  }
  return result;
}
