BOOL __thiscall sub_10080170(int this, char a2, float *a3)
{
  char v4; // di
  unsigned int v5; // eax
  int v6; // eax
  int v8[14]; // [esp+14h] [ebp-38h] BYREF

  v4 = 8;
  if ( !a2 )
    v4 = 12;
  memset(v8, 0, sizeof(v8));
  v5 = *(_DWORD *)(*(_DWORD *)(this + 36) + 16);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 36) + 16) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 36) + 16) & 0xFFF) + 1];
  sub_1007C550(
    *(_DWORD **)(this + 24),
    *(_DWORD *)(this + 12),
    (float *)(*(_DWORD *)(this + 4) + 716),
    a3,
    33701899,
    v6,
    100.0,
    v4,
    (float *)v8);
  return v8[0] >= 0;
}
