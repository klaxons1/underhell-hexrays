int __thiscall sub_10053310(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int i; // edx
  unsigned int v5; // eax
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h]

  v2 = this[3];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  v8 = *this;
  for ( i = *this; ; i += 4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)i + 4);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)i + 4) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)i + 4) & 0xFFF) + 1];
    if ( v6 == a2 )
      break;
    if ( ++v3 >= v2 )
      return 0;
  }
  return *(_DWORD *)(v8 + 4 * v3);
}
