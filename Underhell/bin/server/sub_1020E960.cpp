int __thiscall sub_1020E960(int this)
{
  int result; // eax
  int *v3; // ecx

  sub_1020CE30((_DWORD *)this);
  *(_DWORD *)(this + 1688) = &IMultiplayerPhysics::`vftable';
  *(_DWORD *)this = &CPhysicsPropMultiplayer::`vftable';
  *(_DWORD *)(this + 1120) = &CPhysicsPropMultiplayer::`vftable';
  *(_DWORD *)(this + 1124) = &CPhysicsPropMultiplayer::`vftable';
  *(_DWORD *)(this + 1688) = &CPhysicsPropMultiplayer::`vftable';
  result = this;
  if ( *(_DWORD *)(this + 1692) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1692);
    }
    *(_DWORD *)(this + 1692) = 0;
    result = this;
  }
  *(_BYTE *)(this + 1700) = 0;
  return result;
}
