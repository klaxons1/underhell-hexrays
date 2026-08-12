char __thiscall sub_1006D050(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = this[301];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = (_DWORD *)this[298]; *i != a2; ++i )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
