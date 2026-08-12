int __thiscall sub_10264590(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this[84];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = (_DWORD *)this[81]; *i != a2; ++i )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
