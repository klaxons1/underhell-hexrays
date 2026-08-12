int __thiscall sub_103057E0(int this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-8h] BYREF
  char v4; // [esp+10h] [ebp-4h]

  sub_10041230((float *)this);
  *(_DWORD *)(this + 3620) = &IBehaviorBackBridge::`vftable';
  *(_DWORD *)(this + 3624) = 0;
  *(_DWORD *)(this + 3628) = 0;
  *(_DWORD *)(this + 3632) = 0;
  *(_DWORD *)(this + 3636) = 0;
  *(_DWORD *)(this + 3640) = 0;
  *(_DWORD *)(this + 3644) = 0;
  *(_DWORD *)this = &CNPC_Antlion::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Antlion::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Antlion::`vftable';
  v3 = 2;
  v4 = 0;
  sub_10057350((float *)(this + 3700), (float *)&v3);
  *(_DWORD *)(this + 3700) = &CAI_AntlionFollowBehavior::`vftable';
  sub_1004FB20((_DWORD *)(this + 3936));
  *(_DWORD *)(this + 4004) = -1;
  *(_DWORD *)(this + 3992) = 0;
  *(_DWORD *)(this + 4008) = 5;
  *(_DWORD *)(this + 4028) = -1;
  *(_DWORD *)(this + 4016) = 0;
  *(_DWORD *)(this + 4032) = 5;
  *(_DWORD *)(this + 4100) = -1;
  *(_DWORD *)(this + 4104) = -1;
  sub_10043190();
  if ( dword_1066A980 != dword_10694898 )
  {
    sub_10304300();
    byte_1066A97C = 1;
    dword_1066A980 = dword_10694898;
  }
  *(_DWORD *)(this + 3680) = 0;
  *(float *)(this + 3660) = 0.0;
  *(_BYTE *)(this + 3652) = 0;
  *(float *)(this + 3664) = 0.0;
  *(_WORD *)(this + 4093) = 0;
  *(float *)(this + 3668) = 0.0;
  *(_BYTE *)(this + 4092) = 0;
  *(float *)(this + 3676) = 0.0;
  result = this;
  *(float *)(this + 4076) = 0.0;
  *(float *)(this + 3672) = 256.0;
  *(float *)(this + 1684) = -0.5;
  *(float *)(this + 4064) = 0.0;
  *(float *)(this + 4068) = 0.0;
  *(float *)(this + 3656) = 0.0;
  *(float *)(this + 4052) = 0.0;
  *(float *)(this + 4056) = 0.0;
  *(float *)(this + 4060) = 0.0;
  *(float *)(this + 4040) = 0.0;
  *(float *)(this + 4044) = 0.0;
  *(float *)(this + 4048) = 0.0;
  *(_DWORD *)(this + 4104) = -1;
  *(_DWORD *)(this + 4100) = -1;
  *(_DWORD *)(this + 4132) = -1;
  *(_BYTE *)(this + 4128) = 0;
  *(_WORD *)(this + 4125) = 0;
  return result;
}
