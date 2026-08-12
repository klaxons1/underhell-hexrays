int __thiscall sub_10392460(int this)
{
  int v3; // [esp+Ch] [ebp-8h] BYREF
  char v4; // [esp+10h] [ebp-4h]

  sub_10165190((float *)this);
  *(_DWORD *)this = &CNPC_MetroPolice::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_MetroPolice::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_MetroPolice::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_MetroPolice::`vftable';
  *(float *)(this + 4192) = 0.0;
  *(float *)(this + 4196) = 0.0;
  *(float *)(this + 4188) = -1.0;
  *(float *)(this + 4200) = -1.0;
  *(float *)(this + 4204) = -1.0;
  *(_DWORD *)(this + 4384) = -1;
  *(_DWORD *)(this + 4388) = 5;
  *(_DWORD *)(this + 4372) = 0;
  *(_DWORD *)(this + 4408) = -1;
  *(_DWORD *)(this + 4412) = 5;
  *(_DWORD *)(this + 4396) = 0;
  *(_DWORD *)(this + 4420) = -1;
  *(_DWORD *)(this + 4424) = -1;
  sub_1029B3E0((_DWORD *)(this + 4428));
  sub_10060190((char *)(this + 4548), 0);
  sub_1004FB20((_DWORD *)(this + 4752));
  sub_1029D560((float *)(this + 4804));
  sub_1005CF10((char *)(this + 4840));
  sub_102A9E10((_DWORD *)(this + 4876));
  v3 = 0;
  v4 = 0;
  sub_10057350((float *)(this + 4924), (float *)&v3);
  sub_100AC130((_DWORD *)(this + 5160));
  *(_DWORD *)(this + 5160) = &CAI_Sentence<CNPC_MetroPolice>::`vftable';
  sub_10043190();
  if ( dword_106767E4 != dword_10694898 )
  {
    sub_10391120();
    byte_106767E0 = 1;
    dword_106767E4 = dword_10694898;
  }
  return this;
}
