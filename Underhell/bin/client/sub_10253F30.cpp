char __thiscall sub_10253F30(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = this[68];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = (_DWORD *)this[65]; a2 != *i; ++i )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
