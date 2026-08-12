char __thiscall sub_10226DE0(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // edi
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-4h]

  v3 = this[203];
  v4 = 0;
  v10 = v3;
  if ( v3 <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(this[200] + 4 * v4);
    if ( v5 == -1 )
      goto LABEL_11;
    v6 = &off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v4) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v4) & 0xFFF) + 2] != v5 >> 12 )
      goto LABEL_11;
    v7 = *v6;
    if ( !*v6 )
      goto LABEL_11;
    v8 = *(_DWORD *)(v7 + 976);
    if ( (!v8 || (unsigned __int8)sub_1041CB20(v8) != 1)
      && sub_102237E0((_DWORD *)v7, a2)
      && *(_BYTE *)(v7 + 884)
      && *(int *)(v7 + 1444) <= 0 )
    {
      return 0;
    }
    v3 = v10;
LABEL_11:
    if ( ++v4 >= v3 )
      return 1;
  }
}
