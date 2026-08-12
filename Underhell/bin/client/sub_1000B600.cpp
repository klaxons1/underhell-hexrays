_DWORD *__thiscall sub_1000B600(_DWORD *this, char a2)
{
  *this = &C_BaseCombatWeapon::`vftable';
  this[1] = &C_BaseCombatWeapon::`vftable';
  this[2] = &C_BaseCombatWeapon::`vftable';
  this[3] = &C_BaseCombatWeapon::`vftable';
  sub_10030270();
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
