int __thiscall sub_1041D110(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this[9];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = (_DWORD *)this[6]; a2 != *i; ++i )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
