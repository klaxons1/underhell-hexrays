int __thiscall sub_1018F640(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // esi

  v3 = sub_1018CED0(this, 0);
  sub_1018ED30(this, v3);
  v4 = *this;
  v5 = 12 * v3;
  *(_DWORD *)(v4 + v5 + 8) = -1;
  v6 = this[4];
  *(_DWORD *)(v4 + v5 + 4) = v6;
  this[4] = v3;
  if ( v6 == -1 )
    this[3] = v3;
  else
    *(_DWORD *)(*this + 12 * v6 + 8) = v3;
  ++this[6];
  v7 = (_DWORD *)(v5 + *this);
  if ( v7 )
    *v7 = *a2;
  return v3;
}
