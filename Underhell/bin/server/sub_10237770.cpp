void __thiscall sub_10237770(_DWORD *this, char a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  unsigned int v4; // esi
  int *v5; // ecx
  _DWORD *v6; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v6 = this;
  for ( i = 0; i < v6[285]; ++i )
  {
    v2 = *(_DWORD *)(this[282] + 4 * i);
    if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*(_DWORD *)(this[282] + 4 * i) & 0xFFF) + 1];
    if ( a2 )
    {
      v4 = *(_DWORD *)(v3 + 192) & 0xFFFFFFDF;
      if ( *(_DWORD *)(v3 + 192) != v4 )
      {
        if ( *(_BYTE *)(v3 + 84) )
        {
          *(_BYTE *)(v3 + 88) |= 1u;
        }
        else
        {
          v5 = *(int **)(v3 + 24);
          if ( v5 )
            sub_100194B0(v5, 192);
        }
        *(_DWORD *)(v3 + 192) = v4;
      }
      if ( *(_DWORD *)(v3 + 24) )
        **(_DWORD **)(v3 + 24) |= 0x80u;
      sub_100D8500((_DWORD *)v3);
    }
    else
    {
      sub_100EAB80((_DWORD *)v3, 32);
    }
    this = v6;
  }
}
