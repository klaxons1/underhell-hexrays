int __thiscall sub_10010590(int *this, int a2, const void *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int result; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_100C03E0(v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(32 * a2 + v6 + 32), (const void *)(32 * a2 + v6), 32 * v7);
  result = a2;
  if ( *this + 32 * a2 )
    qmemcpy((void *)(*this + 32 * a2), a3, 0x20u);
  return result;
}
