int __thiscall sub_1007C8D0(int this)
{
  int v2; // edx
  int v3; // edx

  sub_1009BD20();
  *(_DWORD *)(this + 65556) = &IClientEntityList::`vftable';
  *(_DWORD *)this = &CClientEntityList::`vftable';
  *(_DWORD *)(this + 65556) = &CClientEntityList::`vftable';
  *(_DWORD *)(this + 65560) = 0;
  *(_DWORD *)(this + 65564) = 0;
  *(_DWORD *)(this + 65568) = 0;
  *(_DWORD *)(this + 65572) = 0;
  *(_DWORD *)(this + 65576) = 0;
  *(_DWORD *)(this + 98364) = 0;
  *(_DWORD *)(this + 98368) = 0;
  *(_DWORD *)(this + 98372) = 0;
  *(_WORD *)(this + 98384) = -1;
  v2 = *(_DWORD *)(this + 98364);
  *(_DWORD *)(this + 98380) = 0xFFFF;
  *(_DWORD *)(this + 98376) = -1;
  *(_DWORD *)(this + 98388) = v2;
  *(_DWORD *)(this + 98392) = 0;
  *(_DWORD *)(this + 98396) = 0;
  *(_DWORD *)(this + 98400) = 0;
  *(_WORD *)(this + 98412) = -1;
  v3 = *(_DWORD *)(this + 98392);
  *(_DWORD *)(this + 98408) = 0xFFFF;
  *(_DWORD *)(this + 98404) = -1;
  *(_DWORD *)(this + 98416) = v3;
  *(_DWORD *)(this + 98420) = sub_100FACE0;
  *(_DWORD *)(this + 98424) = 0;
  *(_DWORD *)(this + 98428) = 0;
  *(_DWORD *)(this + 98432) = 0;
  *(_DWORD *)(this + 98436) = 0xFFFF;
  *(_DWORD *)(this + 98444) = *(_DWORD *)(this + 98424);
  *(_DWORD *)(this + 98440) = -1;
  *(_DWORD *)(this + 65592) = -1;
  *(_DWORD *)(this + 65584) = 0;
  sub_1007A900((_DWORD *)this);
  return this;
}
