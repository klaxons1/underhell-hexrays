int __thiscall sub_10273C00(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi

  v1 = this[53];
  v2 = (_DWORD *)this[67];
  if ( v1 < 0 )
    return 0;
  if ( v1 >= v2[54] )
    return 0;
  if ( v1 > v2[60] )
    return 0;
  v3 = v2[53];
  if ( *(_DWORD *)(v3 + 12 * v1 + 4) == v1 && *(_DWORD *)(v3 + 12 * v1 + 8) != v1 )
    return 0;
  else
    return *(_DWORD *)(v2[53] + 12 * v1);
}
