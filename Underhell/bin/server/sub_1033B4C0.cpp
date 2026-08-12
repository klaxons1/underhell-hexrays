int __thiscall sub_1033B4C0(_DWORD *this, _DWORD *a2)
{
  int v2; // edi
  _DWORD *v3; // eax

  v2 = this[4];
  this[4] = v2 + 1;
  this[5] = this;
  v3 = &this[v2];
  if ( v3 )
    *v3 = *a2;
  return v2;
}
