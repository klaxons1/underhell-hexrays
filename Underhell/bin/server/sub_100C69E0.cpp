int __thiscall sub_100C69E0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  float *v7; // ecx

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_100C4C70(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(76 * a2 + v5 + 76), (const void *)(76 * a2 + v5), 76 * v6);
  v7 = (float *)(*this + 76 * a2);
  if ( v7 )
    sub_100C5C50(v7, 0);
  return a2;
}
