char __thiscall sub_1027C210(_DWORD *this, int a2, char *a3, wchar_t *Source, int a5, int a6, int a7)
{
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // esi
  _DWORD *i; // ecx
  int v12; // esi

  v7 = this[56];
  v8 = 0;
  if ( v7 <= 0 )
    return 0;
  v9 = (_DWORD *)this[53];
  for ( i = v9; *i != a2; i += 9 )
  {
    if ( ++v8 >= v7 )
      return 0;
  }
  if ( v8 < 0 )
    return 0;
  v12 = v9[9 * v8 + 3] + 172 * sub_1027B880(&v9[9 * v8 + 3], v9[9 * v8 + 6]);
  sub_102282F0((char *)v12, a3, 32);
  wcsncpy((wchar_t *)(v12 + 32), Source, 0x40u);
  *(_DWORD *)(v12 + 164) = a6;
  *(_WORD *)(v12 + 158) = 0;
  *(_DWORD *)(v12 + 160) = a5;
  *(_DWORD *)(v12 + 168) = a7;
  return 1;
}
