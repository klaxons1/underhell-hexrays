_DWORD *__thiscall sub_1009E610(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_1003D000((int)this);
  *this = &C_FuncLadder::`vftable';
  this[1] = &C_FuncLadder::`vftable';
  this[2] = &C_FuncLadder::`vftable';
  this[3] = &C_FuncLadder::`vftable';
  this[301] = 0;
  this[302] = 0;
  this[303] = 0;
  this[304] = 0;
  this[305] = 0;
  *((_BYTE *)this + 1248) = 0;
  v2 = dword_1042DFE8;
  v3 = dword_1042DFE8;
  if ( dword_1042DFE8 + 1 > dword_1042DFE0 )
  {
    sub_1010AFF0(dword_1042DFE8 - dword_1042DFE0 + 1);
    v2 = dword_1042DFE8;
  }
  v4 = dword_1042DFDC;
  dword_1042DFE8 = v2 + 1;
  v5 = v2 - v3;
  dword_1042DFEC = dword_1042DFDC;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_1042DFDC + 4 * v3 + 4), (const void *)(dword_1042DFDC + 4 * v3), 4 * v5);
    v4 = dword_1042DFDC;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}
