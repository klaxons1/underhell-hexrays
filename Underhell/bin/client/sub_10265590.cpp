int __thiscall sub_10265590(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_1010AFF0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3];
  this[4] = *this;
  v7 = v6 - a2 - 1;
  if ( v7 > 0 )
    memcpy((void *)(v5 + 4 * a2 + 4), (const void *)(v5 + 4 * a2), 4 * v7);
  return a2;
}
