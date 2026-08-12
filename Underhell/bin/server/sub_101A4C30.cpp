int __thiscall sub_101A4C30(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_10332930();
  *(_DWORD *)(this + 3832) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CNPC_UH_Butcher::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_UH_Butcher::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_UH_Butcher::`vftable';
  *(_DWORD *)(this + 3832) = &CNPC_UH_Butcher::`vftable';
  sub_103313F0();
  if ( dword_10632B98 != dword_10694898 )
  {
    sub_101A45E0();
    byte_10632B94 = 1;
    dword_10632B98 = dword_10694898;
  }
  *(_BYTE *)(this + 3837) = 1;
  *(_DWORD *)(this + 3840) = -1;
  *(float *)(this + 3852) = 2.0;
  *(float *)(this + 3856) = 6.0;
  *(float *)(this + 3848) = -1.0;
  *(float *)(this + 3864) = 3.0;
  *(float *)(this + 3860) = -1.0;
  *(_DWORD *)(this + 3928) = -1;
  *(_DWORD *)(this + 3932) = -1;
  *(_DWORD *)(this + 3936) = -1;
  *(_DWORD *)(this + 3940) = -1;
  *(_DWORD *)(this + 3944) = -1;
  *(_DWORD *)(this + 3980) = 0;
  *(_DWORD *)(this + 3984) = this + 3948;
  *(float *)(this + 3988) = 1.0;
  *(_BYTE *)(this + 3992) = 0;
  *(_DWORD *)(this + 1708) = *(_DWORD *)(dword_106B9204 + 48);
  sub_10020460((_DWORD *)this, 2099336);
  *(_BYTE *)(this + 1670) = 0;
  result = this;
  if ( *(_DWORD *)(this + 848) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 848) = 2;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 848);
      *(_DWORD *)(this + 848) = 2;
      return this;
    }
  }
  return result;
}
