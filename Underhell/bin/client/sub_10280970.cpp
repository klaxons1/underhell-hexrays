int __thiscall sub_10280970(int *this, int a2)
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
    sub_10245A30(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  v7 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v6 >= 0 && !v7 )
    memcpy((void *)(v5 + 8 * a2 + 8), (const void *)(v5 + 8 * a2), 8 * v6);
  v8 = (_DWORD *)(*this + 8 * a2);
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
  }
  return a2;
}
