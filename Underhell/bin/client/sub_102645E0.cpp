BOOL __thiscall sub_102645E0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // eax
  _DWORD *i; // ecx

  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[73] )
    return 0;
  if ( a2 > this[79] )
    return 0;
  v2 = this[72];
  if ( *(_DWORD *)(v2 + 12 * a2 + 4) == a2 && *(_DWORD *)(v2 + 12 * a2 + 8) != a2 )
    return 0;
  v3 = this[100];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = (_DWORD *)this[97]; *i != a2; ++i )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return v4 >= 0;
}
