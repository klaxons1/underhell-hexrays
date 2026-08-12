BOOL __thiscall sub_1019D3A0(float *this, float a2)
{
  double v2; // st6

  v2 = -a2;
  if ( v2 >= *this )
    return 0;
  if ( a2 > (double)*this )
  {
    if ( v2 < this[1] )
      return a2 > (double)this[1] && v2 < this[2] && a2 > (double)this[2];
    return 0;
  }
  return 0;
}
