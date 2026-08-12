int __thiscall sub_10172330(int this)
{
  int result; // eax

  sub_101506B0((_DWORD *)this);
  *(_DWORD *)this = &C_TEParticleSystem::`vftable';
  *(_DWORD *)(this + 4) = &C_TEParticleSystem::`vftable';
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  result = this;
  *(float *)(this + 24) = 0.0;
  return result;
}
