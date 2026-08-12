int __thiscall sub_10283930(int *this, int a2, const void *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int result; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_10282BC0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(84 * a2 + v6 + 84), (const void *)(84 * a2 + v6), 84 * v7);
  result = a2;
  if ( *this + 84 * a2 )
    qmemcpy((void *)(*this + 84 * a2), a3, 0x54u);
  return result;
}
