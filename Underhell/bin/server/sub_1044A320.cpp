int __thiscall sub_1044A320(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // eax

  v3 = this[1];
  v4 = this[3];
  *((_BYTE *)this + 24) = 1;
  if ( v4 + 1 > v3 )
    sub_1044A1C0(this, v4 - v3 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - v4 - 1;
  v7 = this[3] - v4 == 1;
  this[4] = *this;
  if ( v6 >= 0 && !v7 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  v8 = (_DWORD *)(*this + 4 * v4);
  if ( v8 )
    *v8 = *a2;
  return v4;
}
