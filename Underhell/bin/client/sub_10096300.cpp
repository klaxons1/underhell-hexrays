int __thiscall sub_10096300(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10103390(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(44 * a2 + v5 + 44), (const void *)(44 * a2 + v5), 44 * v6);
  v7 = *this + 44 * a2;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 4) = &IClientRenderable::`vftable';
    *(_BYTE *)(v7 + 36) &= 0xCFu;
    *(_DWORD *)v7 = &CDetailModel::`vftable';
    *(_DWORD *)(v7 + 4) = &CDetailModel::`vftable';
    *(_WORD *)(v7 + 33) = -1;
    *(_BYTE *)(v7 + 32) = -1;
    *(_BYTE *)(v7 + 35) = 0;
  }
  return a2;
}
