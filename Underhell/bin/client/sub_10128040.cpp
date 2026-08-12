int __thiscall sub_10128040(int *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_1007CFB0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(16 * a2 + v6 + 16), (const void *)(16 * a2 + v6), 16 * v7);
  v8 = (_DWORD *)(*this + 16 * a2);
  if ( v8 )
  {
    *v8 = *a3;
    v8[1] = a3[1];
    v8[2] = a3[2];
    v8[3] = a3[3];
  }
  return a2;
}
