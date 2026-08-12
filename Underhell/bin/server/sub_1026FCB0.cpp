_DWORD *__thiscall sub_1026FCB0(_DWORD *this)
{
  sub_1020C250((int)this);
  this[394] = &IDrivableVehicle::`vftable';
  *this = &CPropVehicleChoreoGeneric::`vftable';
  this[280] = &CPropVehicleChoreoGeneric::`vftable';
  this[281] = &CPropVehicleChoreoGeneric::`vftable';
  this[361] = &CPropVehicleChoreoGeneric::`vftable';
  this[394] = &CPropVehicleChoreoGeneric::`vftable';
  this[395] = -1;
  this[396] = &CPropVehicleChoreoGeneric::NetworkVar_m_vehicleView::`vftable';
  this[407] = &vehicleview_t::`vftable';
  sub_1026EEA0(this + 419);
  this[419] = &CChoreoGenericServerVehicle::`vftable';
  this[532] = -1;
  this[533] = 5;
  this[529] = 0;
  this[538] = -1;
  this[535] = 0;
  this[539] = 5;
  this[544] = -1;
  this[541] = 0;
  this[545] = 5;
  this[550] = -1;
  this[547] = 0;
  this[551] = 5;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(this[419] + 252))(this + 419, this);
  *((_BYTE *)this + 2109) = 0;
  *((_BYTE *)this + 1672) = 0;
  return this;
}
