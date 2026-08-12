int __thiscall sub_1041A030(int *this, int a2, int a3)
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
    sub_10418920(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(v6 + 10 * a2 + 10), (const void *)(v6 + 10 * a2), 10 * v7);
  v9 = *this + 10 * a2;
  if ( v9 )
  {
    *(_DWORD *)v9 = *(_DWORD *)a3;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a3 + 4);
    *(_WORD *)(v9 + 8) = *(_WORD *)(a3 + 8);
  }
  return a2;
}
