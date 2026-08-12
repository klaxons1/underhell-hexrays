int __thiscall sub_1018F510(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // esi

  v3 = sub_1018CDE0(this, 0);
  sub_1018EDB0(this, v3);
  v4 = *this;
  v5 = 16 * v3;
  *(_DWORD *)(v4 + v5 + 12) = -1;
  v6 = this[4];
  *(_DWORD *)(v4 + v5 + 8) = v6;
  this[4] = v3;
  if ( v6 == -1 )
    this[3] = v3;
  else
    *(_DWORD *)(*this + 16 * v6 + 12) = v3;
  ++this[6];
  v7 = (_DWORD *)(v5 + *this);
  if ( v7 )
  {
    *v7 = *a2;
    v7[1] = a2[1];
  }
  return v3;
}
