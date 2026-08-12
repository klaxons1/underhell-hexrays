int __thiscall sub_1041DA00(int *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_1044A1C0(v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(v6 + 4 * a2 + 4), (const void *)(v6 + 4 * a2), 4 * v7);
  v9 = (_DWORD *)(*this + 4 * a2);
  if ( v9 )
    *v9 = *a3;
  return a2;
}
