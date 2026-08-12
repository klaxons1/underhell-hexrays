char __thiscall sub_10273EB0(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edi

  v2 = this[53];
  v3 = (_DWORD *)this[67];
  if ( v2 < 0 )
    return 0;
  if ( v2 >= v3[54] )
    return 0;
  if ( v2 > v3[60] )
    return 0;
  v4 = v3[53];
  if ( *(_DWORD *)(v4 + 12 * v2 + 4) == v2 && *(_DWORD *)(v4 + 12 * v2 + 8) != v2 )
    return 0;
  v5 = *(_DWORD *)(v4 + 12 * v2);
  if ( !v5 )
    return 0;
  while ( v5 != a2 )
  {
    v6 = *(_DWORD *)(v5 + 212);
    v7 = *(_DWORD **)(v5 + 268);
    if ( v6 >= 0 && v6 < v7[54] && v6 <= v7[60] )
    {
      v8 = v7[53];
      if ( *(_DWORD *)(v8 + 12 * v6 + 4) != v6 || *(_DWORD *)(v8 + 12 * v6 + 8) == v6 )
      {
        v5 = *(_DWORD *)(v8 + 12 * v6);
        if ( v5 )
          continue;
      }
    }
    return 0;
  }
  return 1;
}
