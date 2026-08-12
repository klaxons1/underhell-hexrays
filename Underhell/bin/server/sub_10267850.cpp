float *__thiscall sub_10267850(float *this)
{
  sub_100C2130(this);
  *((_DWORD *)this + 280) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CPropVehicle::`vftable';
  *((_DWORD *)this + 280) = &CPropVehicle::`vftable';
  sub_10145E50(this + 281, (int)this);
  this[361] = 0.0;
  this[362] = 0.0;
  this[363] = 0.0;
  this[364] = 0.0;
  this[365] = 0.0;
  this[369] = NAN;
  *((_DWORD *)this + 359) = 1;
  return this;
}
