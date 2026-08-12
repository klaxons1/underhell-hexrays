int __thiscall sub_100F4EC0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  bool v6; // zf
  int result; // eax
  int *v8; // ecx

  sub_100CC980((char *)this);
  *(_DWORD *)(this + 2104) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CBaseGrenade::`vftable';
  *(_DWORD *)(this + 2104) = &CBaseGrenade::`vftable';
  *(_DWORD *)(this + 2136) = -1;
  *(_DWORD *)(this + 2140) = -1;
  v2 = *(_DWORD *)(this + 2136);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 2136) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 2136) & 0xFFF) + 1] )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 2136);
    }
    *(_DWORD *)(this + 2136) = -1;
  }
  *(_DWORD *)(this + 2140) = -1;
  if ( *(_BYTE *)(this + 2109) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 2109);
    }
    *(_BYTE *)(this + 2109) = 0;
  }
  if ( *(_DWORD *)(this + 2112) != COERCE_INT(100.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 2112);
    }
    *(float *)(this + 2112) = 100.0;
  }
  v6 = *(_BYTE *)(this + 605) == 1;
  *(float *)(this + 2120) = 0.0;
  *(_BYTE *)(this + 2108) = 0;
  result = this;
  if ( !v6 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 605) = 1;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 605);
      *(_BYTE *)(this + 605) = 1;
      return this;
    }
  }
  return result;
}
