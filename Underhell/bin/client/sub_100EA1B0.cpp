int __thiscall sub_100EA1B0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_100F47A0(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 24 * a2 + 24), (const void *)(v5 + 24 * a2), 24 * v6);
  v7 = (_DWORD *)(*this + 24 * a2);
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
  }
  return a2;
}
