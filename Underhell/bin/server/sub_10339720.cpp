int __thiscall sub_10339720(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax

  v2 = this[1];
  v3 = this[3];
  if ( v3 + 1 > v2 )
    sub_100C86E0(this, v3 - v2 + 1);
  ++this[3];
  v4 = *this;
  v5 = this[3] - v3 - 1;
  this[4] = *this;
  if ( v5 > 0 )
    memcpy((void *)(16 * v3 + v4 + 16), (const void *)(16 * v3 + v4), 16 * v5);
  return v3;
}
