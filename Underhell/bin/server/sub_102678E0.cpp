int __thiscall sub_102678E0(int *this)
{
  int v2; // ecx

  v2 = this[373];
  *this = (int)&CPropVehicleDriveable::`vftable';
  this[280] = (int)&CPropVehicleDriveable::`vftable';
  this[371] = (int)&CPropVehicleDriveable::`vftable';
  this[372] = (int)&CPropVehicleDriveable::`vftable';
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 292))(v2, 1);
    this[373] = 0;
  }
  sub_1010BB10(this + 404);
  sub_1010BB10(this + 398);
  sub_1010BB10(this + 392);
  sub_1010BB10(this + 386);
  sub_1010BB10(this + 380);
  sub_1010BB10(this + 374);
  *this = (int)&CPropVehicle::`vftable';
  this[280] = (int)&CPropVehicle::`vftable';
  sub_102375F0(this + 361);
  sub_10144EC0(this + 281);
  return sub_100C4960(this);
}
