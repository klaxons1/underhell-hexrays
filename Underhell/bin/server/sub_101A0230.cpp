int sub_101A0230()
{
  int v0; // esi
  int v1; // edi
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // eax

  v6 = sub_10184390(32);
  if ( !v6 )
    return 0;
  v0 = v6;
  *(_DWORD *)v6 = &HidingSpot::`vftable';
  *(float *)(v6 + 4) = 0.0;
  *(float *)(v6 + 8) = 0.0;
  *(float *)(v6 + 12) = 0.0;
  *(_DWORD *)(v6 + 16) = dword_1063281C++;
  *(_BYTE *)(v6 + 28) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  v1 = sub_1018CED0(&dword_10632820, 0);
  sub_1018ED30(&dword_10632820, v1);
  v2 = dword_10632820;
  v3 = 12 * v1;
  *(_DWORD *)(dword_10632820 + v3 + 8) = -1;
  v4 = dword_10632830;
  *(_DWORD *)(v2 + v3 + 4) = dword_10632830;
  dword_10632830 = v1;
  if ( v4 == -1 )
    dword_1063282C = v1;
  else
    *(_DWORD *)(dword_10632820 + 12 * v4 + 8) = v1;
  ++dword_10632838;
  v5 = (int *)(dword_10632820 + v3);
  if ( v5 )
    *v5 = v0;
  return v0;
}
