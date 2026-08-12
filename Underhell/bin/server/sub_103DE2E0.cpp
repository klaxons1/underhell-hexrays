char __thiscall sub_103DE2E0(int this, float *a2, int *a3)
{
  unsigned int v3; // edx
  int *v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // esi

  if ( !*(_BYTE *)(this + 868) )
    return 0;
  v3 = *(_DWORD *)(this + 912);
  if ( v3 == -1 )
    return 0;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 912) & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 912) & 0xFFF) + 2] != v5 || !*v4 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 912) & 0xFFF) + 2] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  *a3 = v6;
  v7 = *(_DWORD *)(this + 912);
  if ( v7 == -1 || (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 912) & 0xFFF) + 1], v8[1] != v7 >> 12) )
    v9 = 0;
  else
    v9 = *v8;
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  *a2 = *(float *)(v9 + 580);
  a2[1] = *(float *)(v9 + 584);
  a2[2] = *(float *)(v9 + 588);
  return 1;
}
