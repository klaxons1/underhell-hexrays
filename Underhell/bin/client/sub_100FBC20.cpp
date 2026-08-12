int __thiscall sub_100FBC20(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_100FADF0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 56 * a2 + 56), (const void *)(v5 + 56 * a2), 56 * v6);
  v7 = (_DWORD *)(*this + 56 * a2);
  if ( v7 )
  {
    v7[1] = -1;
    memset(v7, 0, 0x34u);
  }
  return a2;
}
