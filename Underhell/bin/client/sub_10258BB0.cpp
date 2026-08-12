int __thiscall sub_10258BB0(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_10257D20(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(32 * a2 + v6 + 32), (const void *)(32 * a2 + v6), 32 * v7);
  v9 = *this + 32 * a2;
  if ( v9 )
  {
    *(_DWORD *)v9 = *(_DWORD *)a3;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a3 + 4);
    *(_BYTE *)(v9 + 8) = *(_BYTE *)(a3 + 8);
    *(_WORD *)(v9 + 10) = *(_WORD *)(a3 + 10);
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(v9 + 20) = *(_DWORD *)(a3 + 20);
    *(_DWORD *)(v9 + 24) = *(_DWORD *)(a3 + 24);
    *(_DWORD *)(v9 + 28) = *(_DWORD *)(a3 + 28);
  }
  return a2;
}
