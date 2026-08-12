int __thiscall sub_10055090(int *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int i; // edi
  _DWORD *v5; // edx
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v2 = this[3];
  v3 = 0;
  v9 = v2;
  if ( v2 <= 0 )
    return 0;
  v8 = *this;
  for ( i = *this; ; i += 4 )
  {
    v5 = *(_DWORD **)(*(_DWORD *)i + 20);
    if ( v5 )
      break;
LABEL_11:
    if ( ++v3 >= v2 )
      return 0;
  }
  while ( 1 )
  {
    v6 = *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 ? 0 : off_1061BE18[4 * (*v5 & 0xFFF) + 1];
    if ( v6 == a2 )
      return *(_DWORD *)(v8 + 4 * v3);
    v5 = (_DWORD *)v5[18];
    if ( !v5 )
    {
      v2 = v9;
      goto LABEL_11;
    }
  }
}
