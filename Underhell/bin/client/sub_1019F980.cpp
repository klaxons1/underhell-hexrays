int __thiscall sub_1019F980(int this)
{
  int result; // eax

  sub_10059800((_DWORD *)this);
  *(_DWORD *)(this + 1968) = &IClientVehicle::`vftable';
  *(_DWORD *)this = &C_PropVehiclePrisonerPod::`vftable';
  *(_DWORD *)(this + 4) = &C_PropVehiclePrisonerPod::`vftable';
  *(_DWORD *)(this + 8) = &C_PropVehiclePrisonerPod::`vftable';
  *(_DWORD *)(this + 12) = &C_PropVehiclePrisonerPod::`vftable';
  *(_DWORD *)(this + 1968) = &C_PropVehiclePrisonerPod::`vftable';
  *(_DWORD *)(this + 1972) = -1;
  *(_DWORD *)(this + 1976) = -1;
  memset((void *)(this + 2000), 0, 0x78u);
  *(float *)(this + 2008) = 10.0;
  *(_DWORD *)(this + 2000) = this;
  *(float *)(this + 2012) = 45.0;
  *(_BYTE *)(this + 2004) = 1;
  *(float *)(this + 2016) = 5.0;
  result = this;
  *(float *)(this + 2020) = 45.0;
  *(float *)(this + 2024) = 90.0;
  *(float *)(this + 1996) = 0.0;
  return result;
}
