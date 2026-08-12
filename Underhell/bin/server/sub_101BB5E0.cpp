int __thiscall sub_101BB5E0(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_101B5520(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(916 * a2 + v5 + 916), (const void *)(916 * a2 + v5), 916 * v6);
  v7 = (_DWORD *)(*this + 916 * a2);
  if ( v7 )
  {
    v7[169] = &vehiclesounds_t::`vftable';
    v7[170] = 0;
    v7[171] = 0;
    v7[172] = 0;
    v7[173] = 0;
    v7[174] = 0;
    v7[175] = 0;
    v7[176] = 0;
    v7[177] = 0;
    v7[178] = 0;
    v7[179] = 0;
  }
  return a2;
}
