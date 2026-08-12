int __thiscall sub_101BDFC0(int this)
{
  sub_100CC980((char *)this);
  *(_DWORD *)(this + 2104) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CPhysicsCannister::`vftable';
  *(_DWORD *)(this + 2104) = &CPhysicsCannister::`vftable';
  *(_DWORD *)(this + 2120) = &CThrustController::`vftable';
  *(_DWORD *)(this + 2200) = -1;
  *(_DWORD *)(this + 2188) = 0;
  *(_DWORD *)(this + 2204) = 5;
  *(_DWORD *)(this + 2224) = -1;
  *(_DWORD *)(this + 2212) = 0;
  *(_DWORD *)(this + 2228) = 5;
  *(_DWORD *)(this + 2236) = -1;
  *(_DWORD *)(this + 2244) = -1;
  return this;
}
