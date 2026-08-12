int __thiscall sub_100994B0(_DWORD *this, _DWORD *a2)
{
  int v2; // edi
  _DWORD *v3; // eax

  v2 = this[512];
  this[512] = v2 + 1;
  this[513] = this;
  v3 = &this[v2];
  if ( v3 )
    *v3 = *a2;
  return v2;
}
