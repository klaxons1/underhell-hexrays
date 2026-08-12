int __thiscall sub_10158980(int this)
{
  int v2; // ecx
  int v3; // eax

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_ParticleFire::`vftable';
  *(_DWORD *)(this + 4) = &C_ParticleFire::`vftable';
  *(_DWORD *)(this + 8) = &C_ParticleFire::`vftable';
  *(_DWORD *)(this + 12) = &C_ParticleFire::`vftable';
  *(_DWORD *)(this + 1192) = &C_ParticleFire::`vftable';
  *(_DWORD *)(this + 1424) = &C_ParticleFire::`vftable';
  *(float *)(this + 1460) = -1.0;
  v2 = 127;
  *(float *)(this + 1464) = 0.0;
  v3 = this + 1480;
  do
  {
    v3 += 28;
    --v2;
    *(float *)(v3 - 28) = -1.0;
    *(float *)(v3 - 24) = 0.0;
  }
  while ( v2 >= 0 );
  *(_DWORD *)(this + 1428) = 0;
  *(_DWORD *)(this + 1432) = 0;
  return this;
}
