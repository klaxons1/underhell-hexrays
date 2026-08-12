_DWORD *__thiscall sub_10103F20(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_1003D000((int)this);
  *this = &C_FuncPhysicsRespawnZone::`vftable';
  this[1] = &C_FuncPhysicsRespawnZone::`vftable';
  this[2] = &C_FuncPhysicsRespawnZone::`vftable';
  this[3] = &C_FuncPhysicsRespawnZone::`vftable';
  this[298] = 0;
  this[299] = 0;
  this[300] = 0;
  this[301] = 0;
  this[302] = 0;
  v2 = dword_104363E8;
  v3 = dword_104363E8;
  if ( dword_104363E8 + 1 > dword_104363E0 )
  {
    sub_1010AFF0(dword_104363E8 - dword_104363E0 + 1);
    v2 = dword_104363E8;
  }
  v4 = dword_104363DC;
  dword_104363E8 = v2 + 1;
  v5 = v2 - v3;
  dword_104363EC = dword_104363DC;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_104363DC + 4 * v3 + 4), (const void *)(dword_104363DC + 4 * v3), 4 * v5);
    v4 = dword_104363DC;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}
