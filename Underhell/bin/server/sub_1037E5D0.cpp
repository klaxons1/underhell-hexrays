int __thiscall sub_1037E5D0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  char v9; // [esp+10h] [ebp-4h]

  sub_10165190((float *)this);
  *(_DWORD *)this = &CNPC_Hunter::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Hunter::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Hunter::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Hunter::`vftable';
  *(float *)(this + 4176) = -1.0;
  *(_BYTE *)(this + 4180) = 0;
  *(float *)(this + 4216) = -1.0;
  *(float *)(this + 4220) = -1.0;
  *(float *)(this + 4224) = -1.0;
  *(float *)(this + 4236) = -1.0;
  *(float *)(this + 4240) = -1.0;
  v8 = 7;
  v9 = 1;
  sub_10057350((float *)(this + 4292), (float *)&v8);
  *(float *)(this + 4528) = 0.0;
  *(_DWORD *)(this + 4292) = &CAI_HunterEscortBehavior::`vftable';
  *(float *)(this + 4532) = -1.0;
  *(_BYTE *)(this + 4536) = 0;
  *(_DWORD *)(this + 4568) = 0;
  *(_DWORD *)(this + 4572) = 0;
  *(_DWORD *)(this + 4576) = 0;
  *(_DWORD *)(this + 4580) = 0;
  *(_DWORD *)(this + 4584) = 0;
  *(float *)(this + 4592) = -1.0;
  sub_10043190();
  if ( dword_10674318 != dword_10694898 )
  {
    sub_1037BDE0();
    byte_10674314 = 1;
    dword_10674318 = dword_10694898;
  }
  *(_DWORD *)(this + 4604) = 0;
  *(_DWORD *)(this + 4608) = 0;
  *(_DWORD *)(this + 4612) = 0;
  *(_DWORD *)(this + 4616) = 0;
  *(_DWORD *)(this + 4620) = 0;
  *(_DWORD *)(this + 4632) = -1;
  *(_DWORD *)(this + 4636) = -1;
  v2 = dword_106E95A4;
  v3 = dword_106E95A4;
  if ( dword_106E95A4 + 1 > dword_106E959C )
  {
    sub_102ABFC0(&dword_106E9598, dword_106E95A4 - dword_106E959C + 1);
    v2 = dword_106E95A4;
  }
  v4 = dword_106E9598;
  dword_106E95A4 = v2 + 1;
  v5 = v2 - v3;
  dword_106E95A8 = dword_106E9598;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_106E9598 + 4 * v3 + 4), (const void *)(dword_106E9598 + 4 * v3), 4 * v5);
    v4 = dword_106E9598;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  flt_10674310 = -1.0;
  result = this;
  *(float *)(this + 4600) = -1.0;
  return result;
}
