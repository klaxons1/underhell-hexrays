int __thiscall sub_10035070(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_1002A480(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(164 * a2 + v5 + 164), (const void *)(164 * a2 + v5), 164 * v6);
  v7 = (_DWORD *)(*this + 164 * a2);
  if ( v7 )
    sub_10022BD0(v7);
  return a2;
}
