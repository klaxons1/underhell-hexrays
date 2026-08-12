int __thiscall sub_103AE700(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)(this + 3620) = &IBehaviorBackBridge::`vftable';
  *(_DWORD *)(this + 3624) = 0;
  *(_DWORD *)(this + 3628) = 0;
  *(_DWORD *)(this + 3632) = 0;
  *(_DWORD *)(this + 3636) = 0;
  *(_DWORD *)(this + 3640) = 0;
  *(_DWORD *)(this + 3644) = 0;
  *(_DWORD *)this = &CNPC_Stalker::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Stalker::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Stalker::`vftable';
  sub_10043190();
  if ( dword_1067991C != dword_10694898 )
  {
    sub_103AD9B0();
    byte_10679918 = 1;
    dword_1067991C = dword_10694898;
  }
  sub_1029B3E0((_DWORD *)(this + 3752));
  return this;
}
