double __thiscall sub_101E1A50(float *this, int a2, char a3)
{
  double result; // st7
  char *v4; // eax

  if ( a2 == 1 )
    return 0.5;
  v4 = (char *)this + 7 * (a3 == 0);
  if ( v4[72] )
    return *(float *)(v4 + 75);
  result = 0.0;
  if ( this[3] != this[2] )
    return -this[2] / (this[3] - this[2]);
  return result;
}
