int __thiscall sub_1039EBD0(_DWORD *this)
{
  int v2; // eax

  v2 = this[942];
  *this = &CNPC_RollerMine::`vftable';
  this[526] = &CNPC_RollerMine::`vftable';
  this[905] = &CNPC_RollerMine::`vftable';
  this[918] = &CNPC_RollerMine::`vftable';
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v2);
    this[942] = 0;
  }
  if ( this[958] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[958]);
    this[958] = 0;
  }
  sub_1010C110(dword_10614CA8, (int)this, "JoltVehicle");
  this[953] = -1;
  sub_1010BB10(this + 925);
  sub_1010BB10(this + 919);
  sub_1010BB10(this + 912);
  sub_1010BB10(this + 906);
  return sub_10037B80(this);
}
