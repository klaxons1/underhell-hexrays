int __thiscall sub_1044B230(int *this, int a2, _DWORD *a3)
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
    sub_1044AC60(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(v6 + 12 * a2 + 12), (const void *)(v6 + 12 * a2), 12 * v7);
  v9 = (_DWORD *)(*this + 12 * a2);
  if ( v9 )
  {
    *v9 = *a3;
    v9[1] = a3[1];
    v9[2] = a3[2];
  }
  return a2;
}
