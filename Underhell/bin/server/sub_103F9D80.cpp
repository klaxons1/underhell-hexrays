double __thiscall sub_103F9D80(float *this)
{
  double result; // st7
  double v2; // st6

  result = this[394] / *(float *)(dword_106EFDDC + 44);
  v2 = 1.0;
  if ( result > 1.0 )
    return v2;
  v2 = 0.0;
  if ( result < 0.0 )
    return v2;
  return result;
}
