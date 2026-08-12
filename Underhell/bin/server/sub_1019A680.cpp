int __thiscall sub_1019A680(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // esi

  v3 = sub_101982F0(this, 0);
  sub_1019A150(this, v3);
  v4 = *this;
  v5 = 32 * v3;
  *(_DWORD *)(v4 + v5 + 28) = -1;
  v6 = this[4];
  *(_DWORD *)(v4 + v5 + 24) = v6;
  this[4] = v3;
  if ( v6 == -1 )
    this[3] = v3;
  else
    *(_DWORD *)(32 * v6 + *this + 28) = v3;
  ++this[6];
  v7 = (_DWORD *)(v5 + *this);
  if ( v7 )
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
  }
  return v3;
}
