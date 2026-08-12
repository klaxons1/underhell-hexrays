int __thiscall sub_1027AC90(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *i; // ecx

  v2 = this[56];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  v4 = (_DWORD *)this[53];
  for ( i = v4; *i != a2; i += 9 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  if ( v3 >= 0 )
    return v4[9 * v3 + 6];
  else
    return 0;
}
