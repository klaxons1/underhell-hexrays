_DWORD *__thiscall sub_1006D160(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_1003D000((int)this);
  *this = &C_Team::`vftable';
  this[1] = &C_Team::`vftable';
  this[2] = &C_Team::`vftable';
  this[3] = &C_Team::`vftable';
  this[298] = 0;
  this[299] = 0;
  this[300] = 0;
  this[301] = 0;
  this[302] = 0;
  this[311] = 0;
  this[312] = 0;
  this[303] = 0;
  this[304] = 0;
  this[305] = 0;
  this[306] = 0;
  this[307] = 0;
  this[308] = 0;
  this[309] = 0;
  this[310] = 0;
  this[313] = 0;
  this[314] = 0;
  this[315] = 0;
  v2 = dword_10411994;
  v3 = dword_10411994;
  if ( dword_10411994 + 1 > dword_1041198C )
  {
    sub_1010AFF0(dword_10411994 - dword_1041198C + 1);
    v2 = dword_10411994;
  }
  v4 = dword_10411988;
  dword_10411994 = v2 + 1;
  v5 = v2 - v3;
  dword_10411998 = dword_10411988;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_10411988 + 4 * v3 + 4), (const void *)(dword_10411988 + 4 * v3), 4 * v5);
    v4 = dword_10411988;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}
