float *__thiscall sub_10015850(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax

  if ( a3[2] >= (double)this[2] )
    v3 = a3[2];
  else
    v3 = this[2];
  if ( a3[1] >= (double)this[1] )
    v4 = a3[1];
  else
    v4 = this[1];
  result = a2;
  if ( *a3 >= (double)*this )
    *a2 = *a3;
  else
    *a2 = *this;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}
