_DWORD *__thiscall sub_10011C00(_DWORD *this)
{
  sub_1003D000();
  this[298] = &IParticleEffect::`vftable';
  *this = &C_BaseParticleEntity::`vftable';
  this[1] = &C_BaseParticleEntity::`vftable';
  this[2] = &C_BaseParticleEntity::`vftable';
  this[3] = &C_BaseParticleEntity::`vftable';
  this[298] = &C_BaseParticleEntity::`vftable';
  sub_100EEC80(this + 299);
  *((_BYTE *)this + 1416) = 1;
  this[353] = -1;
  return this;
}
