int __thiscall sub_1018B220(float *this, float *a2)
{
  long double v3; // st7
  long double v4; // st6

  if ( this[1] > (double)*a2 || this[4] < (double)*a2 )
  {
    if ( this[2] <= (double)a2[1] && this[5] >= (double)a2[1] )
    {
      if ( this[1] > (double)*a2 )
        return 3;
      if ( this[4] < (double)*a2 )
        return 1;
    }
  }
  else
  {
    if ( this[2] > (double)a2[1] )
      return 0;
    if ( this[5] < (double)a2[1] )
      return 2;
  }
  v3 = *a2 - this[7];
  v4 = a2[1] - this[8];
  if ( fabs(v4) < fabs(v3) )
  {
    if ( v3 > 0.0 )
      return 1;
    return 3;
  }
  if ( v4 > 0.0 )
    return 2;
  return 0;
}
