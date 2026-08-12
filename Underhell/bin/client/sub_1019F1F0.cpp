int __thiscall sub_1019F1F0(int this)
{
  sub_1002F0F0((char *)this);
  *(_DWORD *)(this + 1960) = &IClientVehicle::`vftable';
  *(_DWORD *)this = &C_PropCrane::`vftable';
  *(_DWORD *)(this + 4) = &C_PropCrane::`vftable';
  *(_DWORD *)(this + 8) = &C_PropCrane::`vftable';
  *(_DWORD *)(this + 12) = &C_PropCrane::`vftable';
  *(_DWORD *)(this + 1960) = &C_PropCrane::`vftable';
  *(_DWORD *)(this + 1964) = -1;
  *(_DWORD *)(this + 1968) = -1;
  memset((void *)(this + 2004), 0, 0x78u);
  *(float *)(this + 2028) = 75.0;
  *(_DWORD *)(this + 2004) = this;
  return this;
}
