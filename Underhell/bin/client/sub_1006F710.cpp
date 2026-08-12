int __thiscall sub_1006F710(int this)
{
  int result; // eax

  sub_1005F6D0((_DWORD *)this);
  *(_DWORD *)(this + 1992) = &IClientVehicle::`vftable';
  *(_DWORD *)this = &C_PropVehicleChoreoGeneric::`vftable';
  *(_DWORD *)(this + 4) = &C_PropVehicleChoreoGeneric::`vftable';
  *(_DWORD *)(this + 8) = &C_PropVehicleChoreoGeneric::`vftable';
  *(_DWORD *)(this + 12) = &C_PropVehicleChoreoGeneric::`vftable';
  *(_DWORD *)(this + 1992) = &C_PropVehicleChoreoGeneric::`vftable';
  *(_DWORD *)(this + 1996) = -1;
  *(_DWORD *)(this + 2000) = -1;
  *(_DWORD *)(this + 2144) = &vehicleview_t::`vftable';
  memset((void *)(this + 2024), 0, 0x78u);
  *(float *)(this + 2032) = 10.0;
  *(_DWORD *)(this + 2024) = this;
  *(float *)(this + 2036) = 45.0;
  result = this;
  *(float *)(this + 2040) = 5.0;
  *(float *)(this + 2044) = 45.0;
  *(float *)(this + 2020) = 0.0;
  return result;
}
