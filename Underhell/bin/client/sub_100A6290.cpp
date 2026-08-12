int __thiscall sub_100A6290(_DWORD *this)
{
  int v2; // ecx

  v2 = this[363];
  *this = &C_ParticleTrail::`vftable';
  this[1] = &C_ParticleTrail::`vftable';
  this[2] = &C_ParticleTrail::`vftable';
  this[3] = &C_ParticleTrail::`vftable';
  this[298] = &C_ParticleTrail::`vftable';
  this[356] = &C_ParticleTrail::`vftable';
  if ( v2 )
    sub_100EF970(this + 299);
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
