int __thiscall sub_10093720(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_100798B0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 12 * a2 + 12), (const void *)(v6 + 12 * a2), 12 * v7);
  v8 = *this + 12 * a2;
  if ( v8 )
  {
    *(_WORD *)v8 = *(_WORD *)a3;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(a3 + 4);
    *(float *)(v8 + 8) = *(float *)(a3 + 8);
  }
  return a2;
}
