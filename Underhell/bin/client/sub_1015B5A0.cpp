int __thiscall sub_1015B5A0(_DWORD *this)
{
  int v2; // eax

  *this = &C_PropVehicleDriveable::`vftable';
  this[1] = &C_PropVehicleDriveable::`vftable';
  this[2] = &C_PropVehicleDriveable::`vftable';
  this[3] = &C_PropVehicleDriveable::`vftable';
  this[490] = &C_PropVehicleDriveable::`vftable';
  this[512] = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)((char *)this + 2062) = 0;
  sub_10034930(this[520]);
  sub_10034930(this[517]);
  v2 = this[514];
  if ( v2 )
    sub_10034930(v2 - 4);
  this[514] = 0;
  this[512] = &IInterpolatedVar::`vftable';
  return sub_10030270((int)this);
}
