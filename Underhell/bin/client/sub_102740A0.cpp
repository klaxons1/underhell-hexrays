int __thiscall sub_102740A0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *i; // ecx

  v2 = this[58];
  v3 = 0;
  if ( v2 <= 0 )
    return -1;
  v4 = (_DWORD *)this[55];
  for ( i = v4; *i != a2; ++i )
  {
    if ( ++v3 >= v2 )
      return -1;
  }
  if ( v3 >= v2 - 1 )
    return -1;
  else
    return *(_DWORD *)(v4[v3 + 1] + 208);
}
