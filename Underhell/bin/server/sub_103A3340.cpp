_DWORD *__thiscall sub_103A3340(_DWORD *this)
{
  sub_1039E9F0((int)this);
  this[918] = &CDefaultPlayerPickupVPhysics::`vftable';
  *this = &CNPC_RollerMine::`vftable';
  this[526] = &CNPC_RollerMine::`vftable';
  this[905] = &CNPC_RollerMine::`vftable';
  this[918] = &CNPC_RollerMine::`vftable';
  this[922] = -1;
  this[919] = 0;
  this[923] = 5;
  this[928] = -1;
  this[925] = 0;
  this[929] = 5;
  sub_10043190();
  if ( dword_10678220 != dword_10694898 )
  {
    sub_103A0980();
    byte_1067821C = 1;
    dword_10678220 = dword_10694898;
  }
  this[934] = &CRollerController::`vftable';
  this[953] = -1;
  *((_WORD *)this + 1918) = 1;
  return this;
}
