int __thiscall sub_102878D0(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = sub_10287190(this, 0);
  sub_102872F0(this, v2);
  v3 = *this + 16 * v2;
  *(_DWORD *)(v3 + 12) = -1;
  v4 = this[4];
  *(_DWORD *)(v3 + 8) = v4;
  this[4] = v2;
  if ( v4 == -1 )
  {
    ++this[6];
    this[3] = v2;
  }
  else
  {
    *(_DWORD *)(16 * v4 + *this + 12) = v2;
    ++this[6];
  }
  return v2;
}
