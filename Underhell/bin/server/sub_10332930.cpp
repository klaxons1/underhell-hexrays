int __thiscall sub_10332930(int this)
{
  int v2; // edx

  sub_10041230((float *)this);
  *(_DWORD *)(this + 3620) = &IBehaviorBackBridge::`vftable';
  *(_DWORD *)(this + 3624) = 0;
  *(_DWORD *)(this + 3628) = 0;
  *(_DWORD *)(this + 3632) = 0;
  *(_DWORD *)(this + 3636) = 0;
  *(_DWORD *)(this + 3640) = 0;
  *(_DWORD *)(this + 3644) = 0;
  *(_DWORD *)this = &CNPC_BaseZombie::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_BaseZombie::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_BaseZombie::`vftable';
  sub_1029B3E0((_DWORD *)(this + 3652));
  *(_DWORD *)(this + 3796) = -1;
  *(_DWORD *)(this + 3820) = -1;
  sub_10043190();
  if ( dword_1066E1EC != dword_10694898 )
  {
    sub_1032FC20();
    byte_1066E1E8 = 1;
    dword_1066E1EC = dword_10694898;
  }
  v2 = dword_106E5710;
  *(_BYTE *)(this + 3777) = 0;
  *(_DWORD *)(this + 3824) = v2;
  ++dword_106E5710;
  return this;
}
