int __thiscall sub_103C6C90(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_GroundTurret::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_GroundTurret::`vftable';
  *(_DWORD *)(this + 3632) = -1;
  *(_DWORD *)(this + 3620) = 0;
  *(_DWORD *)(this + 3636) = 5;
  sub_10043190();
  if ( dword_1067C9F4 != dword_10694898 )
  {
    sub_103C6370();
    byte_1067C9F0 = 1;
    dword_1067C9F4 = dword_10694898;
  }
  return this;
}
