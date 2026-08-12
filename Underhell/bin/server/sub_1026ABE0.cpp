int __thiscall sub_1026ABE0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  _DWORD *i; // edi
  int v5; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v11 = this[4];
  if ( v11 <= 0 )
    return 0;
  for ( i = (_DWORD *)(this[1] + 16); ; i += 5 )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( ++v3 >= v11 )
      return 0;
  }
  v7 = this[1];
  v8 = 5 * v3;
  v9 = *(_DWORD *)(v7 + 20 * v3 + 4);
  v10 = *(_DWORD *)(v7 + 4 * v8);
  if ( a3 )
  {
    if ( a3 == 1 )
      return *(_DWORD *)(this[6] + 24 * v10 + 4) + 48 * v9 + 28;
    return 0;
  }
  return *(_DWORD *)(this[6] + 24 * v10 + 4) + 48 * v9 + 8;
}
