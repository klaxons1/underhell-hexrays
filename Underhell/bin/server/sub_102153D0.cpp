int __thiscall sub_102153D0(float *this)
{
  double v1; // st7
  bool v2; // c0
  bool v3; // c3
  double v4; // st7
  int result; // eax

  v1 = this[1];
  v2 = v1 < *this;
  v3 = v1 == *this;
  v4 = this[2];
  if ( v2 || v3 )
  {
    result = 1;
    if ( v4 > this[1] )
      return result;
  }
  else if ( v4 > *this )
  {
    return 0;
  }
  return 2;
}
