int __thiscall sub_104280C0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10427640(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  v7 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v6 >= 0 && !v7 )
    memcpy((void *)(v5 + 40 * a2 + 40), (const void *)(v5 + 40 * a2), 40 * v6);
  v8 = *this + 40 * a2;
  if ( v8 )
    sub_10431290(v8 + 16);
  return a2;
}
