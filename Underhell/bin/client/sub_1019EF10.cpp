int __thiscall sub_1019EF10(int this)
{
  sub_1002F0F0((char *)this);
  *(_DWORD *)(this + 1960) = &IClientVehicle::`vftable';
  *(_DWORD *)this = &C_PropCannon::`vftable';
  *(_DWORD *)(this + 4) = &C_PropCannon::`vftable';
  *(_DWORD *)(this + 8) = &C_PropCannon::`vftable';
  *(_DWORD *)(this + 12) = &C_PropCannon::`vftable';
  *(_DWORD *)(this + 1960) = &C_PropCannon::`vftable';
  *(_DWORD *)(this + 1964) = -1;
  *(_DWORD *)(this + 1968) = -1;
  memset((void *)(this + 2000), 0, 0x78u);
  *(_DWORD *)(this + 2000) = this;
  return this;
}
