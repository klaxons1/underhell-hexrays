int __thiscall sub_1004AD60(int this)
{
  int result; // eax

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)this = &C_EntityParticleTrail::`vftable';
  *(_DWORD *)(this + 4) = &C_EntityParticleTrail::`vftable';
  *(_DWORD *)(this + 8) = &C_EntityParticleTrail::`vftable';
  *(_DWORD *)(this + 12) = &C_EntityParticleTrail::`vftable';
  *(_DWORD *)(this + 1192) = &C_EntityParticleTrail::`vftable';
  sub_1009C3D0(this + 1428);
  *(_DWORD *)(this + 1448) = -1;
  *(float *)(this + 1456) = -1.0;
  result = this;
  *(float *)(this + 1460) = 0.0;
  return result;
}
