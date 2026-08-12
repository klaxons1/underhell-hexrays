int __thiscall sub_1007DB60(int *this, int a2, _WORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _WORD *v8; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_1007D060(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 2 * a2 + 2), (const void *)(v6 + 2 * a2), 2 * v7);
  v8 = (_WORD *)(*this + 2 * a2);
  if ( v8 )
    *v8 = *a3;
  return a2;
}
