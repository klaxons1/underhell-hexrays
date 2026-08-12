int __thiscall sub_102C1E90(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_102BFFD0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 6 * a2 + 6), (const void *)(v6 + 6 * a2), 6 * v7);
  v8 = *this + 6 * a2;
  if ( v8 )
  {
    *(_DWORD *)v8 = *(_DWORD *)a3;
    *(_WORD *)(v8 + 4) = *(_WORD *)(a3 + 4);
  }
  return a2;
}
