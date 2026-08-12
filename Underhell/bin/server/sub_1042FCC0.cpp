unsigned int *__thiscall sub_1042FCC0(unsigned int *this, unsigned int a2)
{
  unsigned int *result; // eax
  int v4; // ecx

  if ( a2 > *this )
    return 0;
  result = (unsigned int *)this[7];
  if ( !result )
  {
    if ( !this[2] )
      return 0;
    sub_1042FC30(this);
    result = (unsigned int *)this[7];
    if ( !result )
      return 0;
  }
  v4 = ++this[8];
  if ( (int)this[9] > v4 )
    v4 = this[9];
  this[9] = v4;
  this[7] = *result;
  return result;
}
