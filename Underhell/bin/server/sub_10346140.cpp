int __thiscall sub_10346140(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_Combine_Cannon::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Combine_Cannon::`vftable';
  *(_DWORD *)(this + 3644) = -1;
  *(_DWORD *)(this + 3648) = -1;
  *(_DWORD *)(this + 3652) = -1;
  *(_DWORD *)(this + 3656) = -1;
  *(_DWORD *)(this + 3660) = -1;
  *(_DWORD *)(this + 3664) = -1;
  sub_10043190();
  if ( dword_1066FE84 != dword_10694898 )
  {
    sub_10344FA0();
    byte_1066FE80 = 1;
    dword_1066FE84 = dword_10694898;
  }
  return this;
}
