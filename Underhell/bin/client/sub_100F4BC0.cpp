int __thiscall sub_100F4BC0(int *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_100F47A0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 24 * a2 + 24), (const void *)(v6 + 24 * a2), 24 * v7);
  v8 = (_DWORD *)(*this + 24 * a2);
  if ( v8 )
  {
    *v8 = *a3;
    v8[1] = a3[1];
    v8[2] = a3[2];
    v8[3] = a3[3];
    v8[4] = a3[4];
    v8[5] = a3[5];
  }
  return a2;
}
