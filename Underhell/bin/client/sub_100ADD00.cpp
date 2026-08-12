int __thiscall sub_100ADD00(int this)
{
  *(_DWORD *)this = &C_GameRulesProxy::`vftable';
  *(_DWORD *)(this + 4) = &C_GameRulesProxy::`vftable';
  *(_DWORD *)(this + 8) = &C_GameRulesProxy::`vftable';
  *(_DWORD *)(this + 12) = &C_GameRulesProxy::`vftable';
  if ( dword_1042E898 == this )
    dword_1042E898 = 0;
  return sub_1003D350(this);
}
