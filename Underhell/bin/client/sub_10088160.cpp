int __thiscall sub_10088160(int *this, int a2, _BYTE *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  signed int v7; // eax
  _BYTE *v8; // esi

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_1001A460(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(a2 + v6 + 1), (const void *)(a2 + v6), v7);
  v8 = (_BYTE *)(a2 + *this);
  if ( v8 )
    *v8 = *a3;
  return a2;
}
