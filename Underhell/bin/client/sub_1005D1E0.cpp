_DWORD *__thiscall sub_1005D1E0(_DWORD *this, char a2)
{
  *this = &C_PlayerResource::`vftable';
  this[1] = &C_PlayerResource::`vftable';
  this[2] = &C_PlayerResource::`vftable';
  this[3] = &C_PlayerResource::`vftable';
  dword_1040D3A8 = 0;
  this[298] = &IGameResources::`vftable';
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
