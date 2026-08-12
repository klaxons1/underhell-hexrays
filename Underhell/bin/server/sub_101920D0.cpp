void __thiscall sub_101920D0(float *this, float *a2)
{
  if ( *this <= (double)*a2 )
  {
    if ( this[3] < (double)*a2 )
      this[3] = *a2;
  }
  else
  {
    *this = *a2;
  }
  if ( this[1] <= (double)a2[1] )
  {
    if ( this[4] < (double)a2[1] )
      this[4] = a2[1];
  }
  else
  {
    this[1] = a2[1];
  }
  if ( this[2] <= (double)a2[2] )
  {
    if ( this[5] < (double)a2[2] )
      this[5] = a2[2];
  }
  else
  {
    this[2] = a2[2];
  }
}
