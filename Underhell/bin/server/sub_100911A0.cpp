int __thiscall sub_100911A0(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_102E82B0(v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 24 * a2 + 24), (const void *)(v6 + 24 * a2), 24 * v7);
  v8 = *this + 24 * a2;
  if ( v8 )
  {
    *(_DWORD *)v8 = *(_DWORD *)a3;
    *(float *)(v8 + 4) = *(float *)(a3 + 4);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(v8 + 20) = *(_DWORD *)(a3 + 20);
  }
  return a2;
}
