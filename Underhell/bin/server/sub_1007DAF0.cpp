int __thiscall sub_1007DAF0(_DWORD *this, int a2)
{
  if ( a2 == -1 )
    return -1;
  while ( this[1] == 9999 || a2 < *this || a2 > this[3] )
  {
    this = (_DWORD *)this[4];
    if ( !this )
      return -1;
  }
  return a2 + this[1] - *this;
}
