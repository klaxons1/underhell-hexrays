_DWORD *__thiscall sub_103D0BD0(_DWORD *this)
{
  _DWORD *result; // eax

  sub_10332930((int)this);
  this[958] = &CDefaultPlayerPickupVPhysics::`vftable';
  *this = &CNPC_Zombine::`vftable';
  this[526] = &CNPC_Zombine::`vftable';
  this[905] = &CNPC_Zombine::`vftable';
  this[958] = &CNPC_Zombine::`vftable';
  sub_103313F0();
  if ( dword_1067DE38 != dword_10694898 )
  {
    sub_103D0680();
    byte_1067DE34 = 1;
    dword_1067DE38 = dword_10694898;
  }
  result = this;
  this[965] = -1;
  return result;
}
