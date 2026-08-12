void __thiscall sub_102DC9D0(void *this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // esi

  v2 = *(_DWORD *)(a2 + 40);
  if ( v2 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1],
        v5 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5)
    && *v4
    && (off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 ? (v6 = 0) : (v6 = *v4),
        *(char **)(v6 + 92) == "mortarshell" || sub_100D6240((_DWORD *)v6, "mortarshell")) )
  {
    v7 = *(_DWORD *)(a2 + 40);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    sub_10261B70((float *)(v8 + 580), 4.0, 1.0, 0.5, 1000.0, 0, 0);
  }
  else
  {
    sub_101E41C0((int)this, a2);
  }
}
