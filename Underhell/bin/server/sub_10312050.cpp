int __thiscall sub_10312050(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int v5; // [esp+8h] [ebp-4h] BYREF

  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_AntlionGuard::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_AntlionGuard::`vftable';
  sub_10043190();
  if ( dword_1066BCD0 != dword_10694898 )
  {
    sub_1030DB00();
    byte_1066BCCC = 1;
    dword_1066BCD0 = dword_10694898;
  }
  *(_DWORD *)(this + 3700) = -1;
  *(_DWORD *)(this + 3704) = -1;
  *(_DWORD *)(this + 3708) = -1;
  *(_DWORD *)(this + 3712) = -1;
  *(_DWORD *)(this + 3716) = -1;
  *(_DWORD *)(this + 3752) = 0;
  *(_DWORD *)(this + 3756) = this + 3720;
  *(_DWORD *)(this + 3772) = -1;
  *(_DWORD *)(this + 3760) = 0;
  *(_DWORD *)(this + 3776) = 5;
  if ( *(_BYTE *)(this + 3674) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 3674);
    }
    *(_BYTE *)(this + 3674) = 0;
  }
  if ( *(_BYTE *)(this + 3675) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 3675);
    }
    *(_BYTE *)(this + 3675) = 0;
  }
  *(_DWORD *)(this + 3804) = *sub_10162BE0(&v5, "prop_physics");
  return this;
}
