char __cdecl sub_1016ADF0(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx

  v2 = a1[78];
  if ( v2 == -1 || (v2 >>= 12, off_1061BE18[4 * (a1[78] & 0xFFF) + 2] != v2) )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (a1[78] & 0xFFF) + 1];
  v4 = a1 + 78;
  if ( v3 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(v3 + 316);
      if ( v2 == -1 || (v2 >>= 12, off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 2] != v2) )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 1];
      if ( v3 == a2 )
        break;
      v4 = (_DWORD *)(v3 + 316);
      v3 = v5;
      if ( !v5 )
        return v2;
    }
    if ( v5 )
      *v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      *v4 = -1;
    v6 = *(_DWORD *)(v3 + 308);
    if ( v6 != -1
      && off_1061BE18[4 * (*(_DWORD *)(v3 + 308) & 0xFFF) + 2] == v6 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v3 + 308) & 0xFFF) + 1] )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v3 + 24);
        if ( v7 )
          sub_100194B0(v7, 308);
      }
      *(_DWORD *)(v3 + 308) = -1;
    }
    *(_DWORD *)(v3 + 316) = -1;
    *(_DWORD *)(v3 + 64) = -1;
    sub_100D8500((_DWORD *)v3);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 352))(v3, 2, 0);
    LOBYTE(v2) = sub_100D94F0(a1);
    if ( (_BYTE)v2 )
      a1[63] |= 0x10u;
    else
      a1[63] &= ~0x10u;
  }
  return v2;
}
