_DWORD *__thiscall sub_1015DF10(_DWORD *this, char a2)
{
  *this = &CGameRulesProxy::`vftable';
  if ( (_DWORD *)dword_106B3CD8 == this )
    dword_106B3CD8 = 0;
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
