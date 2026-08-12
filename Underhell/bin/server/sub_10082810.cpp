int __thiscall sub_10082810(int *this, int a2, const void *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_102C0070(v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(48 * a2 + v6 + 48), (const void *)(48 * a2 + v6), 48 * v7);
  v8 = *this + 48 * a2;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 24) = -1;
    *(_DWORD *)(v8 + 28) = -1;
    qmemcpy((void *)v8, a3, 0x30u);
    *(float *)(v8 + 20) = -1.0;
    *(_DWORD *)(v8 + 44) = 0;
    *(_DWORD *)(v8 + 40) = 0;
  }
  return a2;
}
