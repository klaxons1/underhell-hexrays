int __thiscall sub_1044B2B0(int *this, int a2, const void *a3)
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
    sub_1044AD00(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)((a2 << 6) + v6 + 64), (const void *)((a2 << 6) + v6), v7 << 6);
  result = a2;
  if ( *this + (a2 << 6) )
    qmemcpy((void *)(*this + (a2 << 6)), a3, 0x40u);
  return result;
}
