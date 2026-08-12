int __thiscall sub_1010B0A0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_1007CFB0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(16 * a2 + v5 + 16), (const void *)(16 * a2 + v5), 16 * v6);
  v7 = *this + 16 * a2;
  if ( v7 )
    sub_1022D3E0(v7);
  return a2;
}
