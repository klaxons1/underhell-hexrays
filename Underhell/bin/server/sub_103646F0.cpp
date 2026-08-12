int __thiscall sub_103646F0(int this)
{
  int v3; // [esp+Ch] [ebp-8h] BYREF
  char v4; // [esp+10h] [ebp-4h]

  sub_10165190((float *)this);
  *(_DWORD *)this = &CNPC_Dog::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Dog::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Dog::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Dog::`vftable';
  *(_DWORD *)(this + 4184) = -1;
  *(_DWORD *)(this + 4188) = -1;
  *(_DWORD *)(this + 4216) = -1;
  *(_DWORD *)(this + 4204) = 0;
  *(_DWORD *)(this + 4220) = 5;
  *(_DWORD *)(this + 4240) = -1;
  *(_DWORD *)(this + 4228) = 0;
  *(_DWORD *)(this + 4244) = 5;
  *(_DWORD *)(this + 4264) = -1;
  *(_DWORD *)(this + 4252) = 0;
  *(_DWORD *)(this + 4268) = 5;
  *(_DWORD *)(this + 4292) = 0;
  *(_DWORD *)(this + 4296) = 0;
  *(_DWORD *)(this + 4300) = 0;
  *(_DWORD *)(this + 4304) = 0;
  *(_DWORD *)(this + 4308) = 0;
  sub_101BD540((_DWORD *)(this + 4312));
  *(_DWORD *)(this + 4336) = -1;
  *(_DWORD *)(this + 4340) = -1;
  *(_DWORD *)(this + 4344) = -1;
  *(_DWORD *)(this + 4348) = -1;
  *(_DWORD *)(this + 4352) = -1;
  *(_DWORD *)(this + 4356) = -1;
  *(_DWORD *)(this + 4360) = -1;
  *(_DWORD *)(this + 4364) = -1;
  v3 = 0;
  v4 = 0;
  sub_10057350((float *)(this + 4368), (float *)&v3);
  sub_10043190();
  if ( dword_106726EC != dword_10694898 )
  {
    sub_10362230();
    byte_106726E8 = 1;
    dword_106726EC = dword_10694898;
  }
  return this;
}
