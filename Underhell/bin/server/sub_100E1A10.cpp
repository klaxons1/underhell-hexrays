int __thiscall sub_100E1A10(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_100C86E0(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v7 > 0 )
    memcpy((void *)(16 * a2 + v6 + 16), (const void *)(16 * a2 + v6), 16 * v7);
  if ( *this + 16 * a2 )
    sub_10431220(a3);
  return a2;
}
