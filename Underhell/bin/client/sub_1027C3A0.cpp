int __thiscall sub_1027C3A0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10279550(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  v7 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v6 >= 0 && !v7 )
    memcpy((void *)(v5 + 36 * a2 + 36), (const void *)(v5 + 36 * a2), 36 * v6);
  v8 = (_DWORD *)(*this + 36 * a2);
  if ( v8 )
  {
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
  }
  return a2;
}
