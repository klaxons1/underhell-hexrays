void __usercall sub_104091D0(int a1@<ecx>, int a2@<ebp>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // edi
  char *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  bool v10; // zf

  v3 = *(_DWORD *)(a1 + 1408);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1408) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    v5 = *(_DWORD *)(a1 + 412);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v7 = sub_10409070((float *)(a1 + 580), v6, 1);
    if ( v7 )
      *(_DWORD *)(a1 + 1408) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v7 + 8))(v7);
    else
      *(_DWORD *)(a1 + 1408) = -1;
    v8 = *(_DWORD *)(a1 + 1408);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1408) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1408) & 0xFFF) + 1];
    v10 = *(_BYTE *)(v9 + 896) == 0;
    *(_BYTE *)(v9 + 897) = 0;
    if ( !v10 )
      sub_10242060((int *)v9);
    sub_104059F0((_DWORD *)a1, a2, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
  }
}
