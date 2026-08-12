int __thiscall sub_10387900(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  float v8; // [esp+8h] [ebp-4h]

  sub_10383930((_DWORD *)this);
  *(_DWORD *)(this + 3732) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CNPC_Manhack::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Manhack::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Manhack::`vftable';
  *(_DWORD *)(this + 3680) = &CNPC_Manhack::`vftable';
  *(_DWORD *)(this + 3732) = &CNPC_Manhack::`vftable';
  sub_10043190();
  if ( dword_10675C40 != dword_10694898 )
  {
    sub_10386960();
    byte_10675C3C = 1;
    dword_10675C40 = dword_10694898;
  }
  *(_DWORD *)(this + 3836) = -1;
  *(_DWORD *)(this + 3868) = -1;
  *(_BYTE *)(this + 3852) = 1;
  *(_DWORD *)(this + 3888) = 0;
  if ( *(_DWORD *)(this + 3916) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 3916);
    }
    *(_DWORD *)(this + 3916) = -1;
  }
  if ( *(_DWORD *)(this + 3920) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 3920);
    }
    *(_DWORD *)(this + 3920) = -1;
  }
  v4 = 0.0;
  if ( *(_DWORD *)(this + 3924) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 3924);
        v4 = 0.0;
      }
    }
    *(float *)(this + 3924) = v4;
  }
  v8 = v4;
  if ( *(_DWORD *)(this + 3924) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 3924);
        v4 = 0.0;
      }
    }
    *(float *)(this + 3924) = v4;
  }
  *(float *)(this + 3912) = v4;
  *(_BYTE *)(this + 3892) = 1;
  return this;
}
