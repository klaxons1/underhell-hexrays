int __thiscall sub_103431B0(int this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-8h] BYREF
  char v4; // [esp+10h] [ebp-4h]

  sub_10165190((float *)this);
  *(_DWORD *)this = &CNPC_Combine::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Combine::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Combine::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Combine::`vftable';
  sub_10043190();
  if ( dword_1066F6E0 != dword_10694898 )
  {
    sub_10341EF0();
    byte_1066F6DC = 1;
    dword_1066F6E0 = dword_10694898;
  }
  *(_DWORD *)(this + 4176) = -1;
  *(_DWORD *)(this + 4208) = -1;
  sub_100AC130((_DWORD *)(this + 4244));
  *(_DWORD *)(this + 4244) = &CAI_Sentence<CNPC_Combine>::`vftable';
  sub_1004FB20((_DWORD *)(this + 4272));
  sub_10060190((char *)(this + 4324), 0);
  *(_DWORD *)(this + 4324) = &CNPC_Combine::CCombineStandoffBehavior::`vftable';
  v3 = 0;
  v4 = 0;
  sub_10057350((float *)(this + 4528), (float *)&v3);
  sub_1029D560((float *)(this + 4764));
  sub_1005CF10((char *)(this + 4800));
  sub_1029B3E0((_DWORD *)(this + 4836));
  *(_WORD *)(this + 4976) = 0;
  *(_BYTE *)(this + 4188) = 0;
  *(_BYTE *)(this + 4988) = 0;
  *(_BYTE *)(this + 4173) = 0;
  *(_DWORD *)(this + 4176) = -1;
  *(float *)(this + 4196) = flt_106F1CA8;
  result = this;
  *(float *)(this + 4200) = flt_106F1CAC;
  *(float *)(this + 4204) = flt_106F1CB0;
  return result;
}
