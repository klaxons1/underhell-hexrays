int __thiscall sub_1008B2A0(int *this, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax

  v4 = this[516];
  v5 = this[1];
  if ( v4 + 1 > v5 )
  {
    v6 = v4 - v5 + 1;
    if ( this[2] < 0 )
      sub_1008B240((int)this, this[3]);
    sub_1010AFF0(v6);
  }
  ++this[516];
  v7 = *this;
  v8 = this[516] - a2 - 1;
  this[517] = *this;
  if ( v8 > 0 )
    memcpy((void *)(v7 + 4 * a2 + 4), (const void *)(v7 + 4 * a2), 4 * v8);
  v9 = (_DWORD *)(*this + 4 * a2);
  if ( v9 )
    *v9 = *a3;
  return a2;
}
