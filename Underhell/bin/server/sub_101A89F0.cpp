_DWORD *__thiscall sub_101A89F0(_DWORD *this, char a2)
{
  *this = &CNPC_VehicleDriver::`vftable';
  this[526] = &CNPC_VehicleDriver::`vftable';
  sub_101A83B0((int)this);
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
