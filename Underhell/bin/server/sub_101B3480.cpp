int __thiscall sub_101B3480(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_101B0E20(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 28 * a2 + 28), (const void *)(v5 + 28 * a2), 28 * v6);
  v7 = *this + 28 * a2;
  if ( v7 )
    *(_DWORD *)(v7 + 12) = -1;
  return a2;
}
