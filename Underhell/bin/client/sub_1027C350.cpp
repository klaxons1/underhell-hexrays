int __thiscall sub_1027C350(int *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax

  v2 = sub_1027A4F0(this, 0);
  sub_10265FF0(this, v2);
  v3 = *this + 12 * v2;
  *(_DWORD *)(v3 + 8) = -1;
  v4 = this[4];
  *(_DWORD *)(v3 + 4) = v4;
  this[4] = v2;
  if ( v4 == -1 )
  {
    ++this[6];
    this[3] = v2;
  }
  else
  {
    *(_DWORD *)(*this + 12 * v4 + 8) = v2;
    ++this[6];
  }
  return v2;
}
