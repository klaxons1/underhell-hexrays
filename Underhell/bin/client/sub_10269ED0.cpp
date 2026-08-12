int __thiscall sub_10269ED0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // esi

  v3 = sub_1027A4F0(0);
  sub_10265FF0(this, v3);
  v4 = 12 * v3 + *this;
  *(_DWORD *)(v4 + 8) = -1;
  v5 = this[4];
  *(_DWORD *)(v4 + 4) = v5;
  this[4] = v3;
  if ( v5 == -1 )
    this[3] = v3;
  else
    *(_DWORD *)(*this + 12 * v5 + 8) = v3;
  ++this[6];
  v6 = (_DWORD *)(12 * v3 + *this);
  if ( v6 )
    *v6 = *a2;
  return v3;
}
