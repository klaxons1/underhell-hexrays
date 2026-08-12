int __thiscall sub_1015B6D0(int this)
{
  double v2; // st7

  sub_1002F0F0((char *)this);
  *(_DWORD *)(this + 1960) = &IClientVehicle::`vftable';
  *(_DWORD *)this = &C_PropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 4) = &C_PropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 8) = &C_PropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 12) = &C_PropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1960) = &C_PropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1968) = -1;
  *(_DWORD *)(this + 2048) = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)(this + 2056) = 0;
  *(_DWORD *)(this + 2060) = 0;
  *(_DWORD *)(this + 2064) = 0x100000;
  sub_10038BE0((unsigned __int16 *)(this + 2056), 4);
  *(float *)(this + 2084) = 0.0;
  *(float *)(this + 2072) = 0.0;
  *(_DWORD *)(this + 2088) = "C_PropVehicleDriveable::m_iv_vecGunCrosshair";
  *(_DWORD *)(this + 2052) = 0;
  *(_WORD *)(this + 2076) = 1;
  *(_DWORD *)(this + 2068) = 0;
  *(_DWORD *)(this + 2080) = 0;
  *(_DWORD *)(this + 2048) = &CInterpolatedVar<Vector>::`vftable';
  sub_1010EC10((unsigned __int8 *)(this + 2048), 1);
  *(_DWORD *)(this + 2108) = -1;
  memset((void *)(this + 2112), 0, 0x78u);
  *(float *)(this + 2120) = 10.0;
  *(float *)(this + 2124) = 45.0;
  *(_DWORD *)(this + 2112) = this;
  *(_BYTE *)(this + 2116) = 1;
  *(float *)(this + 2128) = 20.0;
  *(_BYTE *)(this + 2172) = 1;
  *(float *)(this + 2132) = 90.0;
  v2 = *(float *)(dword_1044CC6C + 44);
  *(float *)(this + 2032) = *(float *)(dword_1044CC6C + 44);
  *(float *)(this + 2136) = v2;
  sub_1003CF30((int *)this, this + 2036, (int *)(this + 2048), 2, 0);
  return this;
}
