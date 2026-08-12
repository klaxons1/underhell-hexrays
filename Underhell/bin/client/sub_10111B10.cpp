int __thiscall sub_10111B10(int *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int result; // eax

  sub_1010FAF0(this);
  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10118050(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - v3 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 8 * v3 + 8), (const void *)(v5 + 8 * v3), 8 * v6);
  *(_DWORD *)(*this + 8 * v3) = a2;
  result = *this;
  *(_DWORD *)(*this + 8 * v3 + 4) = *((_DWORD *)off_103DC81C + 6);
  return result;
}
