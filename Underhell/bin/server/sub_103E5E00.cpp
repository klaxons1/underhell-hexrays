_DWORD *__thiscall sub_103E5E00(_DWORD *this)
{
  sub_100C2130(this);
  this[280] = &IDrivableVehicle::`vftable';
  *this = &CPropCrane::`vftable';
  this[280] = &CPropCrane::`vftable';
  sub_1026EEA0(this + 281);
  this[281] = &CCraneServerVehicle::`vftable';
  sub_101BD540(this + 385);
  this[391] = -1;
  this[393] = -1;
  this[402] = -1;
  this[399] = 0;
  this[403] = 5;
  this[408] = -1;
  this[405] = 0;
  this[409] = 5;
  this[429] = -1;
  this[430] = -1;
  this[431] = -1;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(this[281] + 252))(this + 281, this);
  return this;
}
