int __thiscall sub_100616E0(int *this, int a2, const void *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  void *v8; // edi
  int result; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_10061230(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 56 * a2 + 56), (const void *)(v6 + 56 * a2), 56 * v7);
  v8 = (void *)(*this + 56 * a2);
  result = a2;
  if ( v8 )
    qmemcpy(v8, a3, 0x38u);
  return result;
}
