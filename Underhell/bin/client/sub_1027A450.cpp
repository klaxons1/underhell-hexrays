int __thiscall sub_1027A450(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx
  int v8; // eax
  bool v9; // cc
  _DWORD *v10; // eax

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
  if ( v4 >= 0 && (v8 = 9 * v4, v9 = a3 < v5[v8 + 6], v10 = &v5[v8], v9) )
    return *(_DWORD *)(v10[3] + 172 * a3 + 168);
  else
    return 0;
}
