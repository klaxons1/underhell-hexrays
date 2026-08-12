int __thiscall sub_101491B0(int this)
{
  sub_100E33C0((char *)this, 0);
  *(_DWORD *)(this + 800) = &IBreakableWithPropData::`vftable';
  *(_DWORD *)(this + 804) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CBreakable::`vftable';
  *(_DWORD *)(this + 800) = &CBreakable::`vftable';
  *(_DWORD *)(this + 804) = &CBreakable::`vftable';
  *(_DWORD *)(this + 816) = -1;
  *(_DWORD *)(this + 884) = -1;
  *(_DWORD *)(this + 872) = 0;
  *(_DWORD *)(this + 888) = 5;
  *(_DWORD *)(this + 908) = -1;
  *(_DWORD *)(this + 896) = 0;
  *(_DWORD *)(this + 912) = 5;
  *(_DWORD *)(this + 968) = -1;
  return this;
}
