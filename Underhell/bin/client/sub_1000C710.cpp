_DWORD *__thiscall sub_1000C710(_DWORD *this)
{
  sub_1002F0F0();
  *this = &C_BaseCombatWeapon::`vftable';
  this[1] = &C_BaseCombatWeapon::`vftable';
  this[2] = &C_BaseCombatWeapon::`vftable';
  this[3] = &C_BaseCombatWeapon::`vftable';
  this[490] = -1;
  this[521] = -1;
  *((float *)this + 513) = 65.0;
  *((float *)this + 514) = 65.0;
  *((_WORD *)this + 983) = 0;
  *((float *)this + 515) = 1024.0;
  *((_BYTE *)this + 1965) = 0;
  *((float *)this + 516) = 1024.0;
  *((_BYTE *)this + 2068) = 0;
  if ( this[492] )
    this[492] = 0;
  this[530] = 0;
  if ( this[506] != this[530] )
    this[506] = this[530];
  if ( this[510] != -1 )
    this[510] = -1;
  if ( this[511] != -1 )
    this[511] = -1;
  if ( this[508] != -1 )
    this[508] = -1;
  if ( this[509] != -1 )
    this[509] = -1;
  *((_WORD *)this + 1044) = sub_1014F0D0();
  if ( *(_DWORD *)((char *)this + 1163) != 1693501540 )
    *(_DWORD *)((char *)this + 1163) = 1693501540;
  return this;
}
