int __thiscall sub_102C1D70(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_102BFF20(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(a2 + v6 + 16 * a2 + 17), (const void *)(a2 + v6 + 16 * a2), 17 * v7);
  v8 = *this + 17 * a2;
  if ( v8 )
  {
    *(_DWORD *)v8 = *(_DWORD *)a3;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(a3 + 12);
    *(_BYTE *)(v8 + 16) = *(_BYTE *)(a3 + 16);
  }
  return a2;
}
