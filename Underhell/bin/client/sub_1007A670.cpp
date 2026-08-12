int __thiscall sub_1007A670(_DWORD *this)
{
  int result; // eax
  _DWORD *i; // edx

  this[16398] = -1;
  result = 2047;
  for ( i = this + 8189; !*i; i -= 4 )
  {
    if ( --result < 0 )
      return result;
  }
  this[16398] = result;
  return result;
}
