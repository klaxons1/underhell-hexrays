int __thiscall sub_100A63B0(int this)
{
  int result; // eax

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_ParticleTrail::`vftable';
  *(_DWORD *)(this + 4) = &C_ParticleTrail::`vftable';
  *(_DWORD *)(this + 8) = &C_ParticleTrail::`vftable';
  *(_DWORD *)(this + 12) = &C_ParticleTrail::`vftable';
  *(_DWORD *)(this + 1192) = &C_ParticleTrail::`vftable';
  *(_DWORD *)(this + 1424) = &C_ParticleTrail::`vftable';
  *(float *)(this + 1444) = -1.0;
  result = this;
  *(float *)(this + 1448) = 0.0;
  return result;
}
