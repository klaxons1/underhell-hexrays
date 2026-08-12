_DWORD *__thiscall sub_103E3C40(_DWORD *this)
{
  sub_100C2130(this);
  this[280] = &IDrivableVehicle::`vftable';
  *this = &CPropCannon::`vftable';
  this[280] = &CPropCannon::`vftable';
  this[286] = -1;
  this[290] = -1;
  this[291] = 5;
  this[287] = 0;
  this[296] = -1;
  this[297] = 5;
  this[293] = 0;
  sub_1026EEA0(this + 315);
  this[315] = &CCannonServerVehicle::`vftable';
  sub_101BD540(this + 419);
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(this[315] + 252))(this + 315, this);
  return this;
}
