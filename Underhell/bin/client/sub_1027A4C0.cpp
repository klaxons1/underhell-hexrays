int __thiscall sub_1027A4C0(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this[3];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = (_DWORD *)*this; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
