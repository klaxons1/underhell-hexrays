int __thiscall sub_101E47A0(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // esi

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_101F9980(v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(v6 + 24 * a2 + 24), (const void *)(v6 + 24 * a2), 24 * v7);
  v9 = *this + 24 * a2;
  if ( v9 )
  {
    sub_1022D3E0(v9);
    sub_1022D080(a3);
    *(float *)(v9 + 16) = *(float *)(a3 + 16);
    *(_DWORD *)(v9 + 20) = *(_DWORD *)(a3 + 20);
  }
  return a2;
}
