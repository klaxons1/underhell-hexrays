int __thiscall sub_100AB0F0(_DWORD ***this, int a2, int a3)
{
  unsigned int v3; // eax
  int v4; // edx
  unsigned int v6; // eax

  v3 = a3 != -1 ? a3 : 0;
  *(_BYTE *)(a2 + 3) = a3;
  if ( v3 >= 3 )
  {
LABEL_5:
    *(_DWORD *)a2 = -1;
    return 0;
  }
  v4 = (int)&this[v3 + 21];
  while ( !*(_DWORD *)(*(_DWORD *)v4 + 12) )
  {
    ++v3;
    v4 += 4;
    if ( v3 >= 3 )
      goto LABEL_5;
  }
  *(_BYTE *)a2 = v3;
  *(_WORD *)(a2 + 1) = 1;
  v6 = **this[v3 + 21];
  if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
    return 0;
  return off_1061BE18[4 * (v6 & 0xFFF) + 1];
}
