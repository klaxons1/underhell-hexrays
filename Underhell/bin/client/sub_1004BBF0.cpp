int __thiscall sub_1004BBF0(int this)
{
  sub_1002F0F0((char *)this);
  *(_DWORD *)(this + 1960) = &IParticleEffect::`vftable';
  *(_DWORD *)this = &C_EnvParticleScript::`vftable';
  *(_DWORD *)(this + 4) = &C_EnvParticleScript::`vftable';
  *(_DWORD *)(this + 8) = &C_EnvParticleScript::`vftable';
  *(_DWORD *)(this + 12) = &C_EnvParticleScript::`vftable';
  *(_DWORD *)(this + 1960) = &C_EnvParticleScript::`vftable';
  sub_100EEC80(this + 1964);
  *(float *)(this + 2180) = 0.0;
  *(_BYTE *)(this + 2192) = 1;
  return this;
}
