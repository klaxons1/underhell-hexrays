char __thiscall sub_101C3430(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  _DWORD *i; // edx

  v3 = sub_101C5260(a2);
  if ( (*(_BYTE *)(a2 + 256) & 1) == 0 && !v3 )
    return 0;
  v4 = this[1];
  v5 = *(_DWORD *)(v4 + 16) - 1;
  if ( v5 < 0 )
    return 0;
  for ( i = (_DWORD *)(*(_DWORD *)(v4 + 4) + 16 * v5); *i != v3; i -= 4 )
  {
    if ( --v5 < 0 )
      return 0;
  }
  return 1;
}
