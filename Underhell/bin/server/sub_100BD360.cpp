double __thiscall sub_100BD360(float *this)
{
  double result; // st7
  double v2; // st6

  if ( *(float *)(dword_106B31C8 + 12) <= (double)this[31] )
    result = this[31] - this[30];
  else
    result = *(float *)(dword_106B31C8 + 12) - this[31];
  v2 = 0.2;
  if ( result > 0.2 )
    return v2;
  v2 = 0.0;
  if ( result < 0.0 )
    return v2;
  return result;
}
