int __thiscall sub_101A7B70(int this)
{
  sub_10332930();
  *(_DWORD *)(this + 3832) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CNPC_UH_Infected::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_UH_Infected::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_UH_Infected::`vftable';
  *(_DWORD *)(this + 3832) = &CNPC_UH_Infected::`vftable';
  sub_103313F0();
  if ( dword_10633288 != dword_10694898 )
  {
    sub_101A7410();
    byte_10633284 = 1;
    dword_10633288 = dword_10694898;
  }
  *(_DWORD *)(this + 3840) = -1;
  *(float *)(this + 3852) = 2.0;
  *(float *)(this + 3856) = 6.0;
  *(float *)(this + 3848) = -1.0;
  *(float *)(this + 3864) = 3.0;
  *(float *)(this + 3860) = -1.0;
  *(_DWORD *)(this + 3896) = 0;
  *(_BYTE *)(this + 3900) = 1;
  *(float *)(this + 3908) = 0.0;
  *(_BYTE *)(this + 3901) = 1;
  *(_BYTE *)(this + 3902) = 1;
  *(_BYTE *)(this + 3903) = 1;
  *(_BYTE *)(this + 3904) = 1;
  *(_BYTE *)(this + 3905) = 1;
  *(_BYTE *)(this + 3906) = 1;
  *(_BYTE *)(this + 3907) = 1;
  *(_BYTE *)(this + 3912) = 0;
  *(_DWORD *)(this + 1708) = *(_DWORD *)(dword_106B9204 + 48);
  if ( *(_DWORD *)(dword_106B9324 + 48) )
    *(float *)(this + 3876) = (double)sub_10219A30() * 0.000030518509 * 0.5 + 0.8;
  *(_BYTE *)(this + 1713) = 1;
  *(_DWORD *)(this + 1716) = *(_DWORD *)(dword_106B91BC + 48) / 2;
  *(_DWORD *)(this + 1720) = *(_DWORD *)(dword_106B9174 + 48) / 4;
  *(_DWORD *)(this + 1724) = *(_DWORD *)(dword_106B9174 + 48) / 4;
  *(_DWORD *)(this + 1728) = *(_DWORD *)(dword_106B9174 + 48) / 2;
  *(_DWORD *)(this + 1732) = *(_DWORD *)(dword_106B9174 + 48) / 2;
  sub_10020460((_DWORD *)this, 2097290);
  *(_BYTE *)(this + 1670) = 0;
  return this;
}
