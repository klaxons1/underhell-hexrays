int __thiscall sub_1027ACE0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx
  _DWORD *v8; // ecx

  v3 = this[56];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  v5 = (_DWORD *)this[53];
  for ( i = v5; *i != a2; i += 9 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  if ( v4 < 0 )
    return 0;
  v8 = &v5[9 * v4];
  if ( a3 >= v8[6] )
    return 0;
  else
    return v8[3] + 172 * a3;
}
