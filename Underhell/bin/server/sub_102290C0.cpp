int __thiscall sub_102290C0(int *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_10226280(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(140 * a2 + v6 + 140), (const void *)(140 * a2 + v6), 140 * v7);
  v8 = (_DWORD *)(*this + 140 * a2);
  if ( v8 )
  {
    *v8 = *a3;
    qmemcpy(v8 + 1, a3 + 1, 0x88u);
  }
  return a2;
}
