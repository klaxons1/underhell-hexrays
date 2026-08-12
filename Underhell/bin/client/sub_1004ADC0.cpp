_DWORD *__thiscall sub_1004ADC0(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp-4h] [ebp-8h]

  v4 = this + 299;
  *this = &C_EntityParticleTrail::`vftable';
  this[1] = &C_EntityParticleTrail::`vftable';
  this[2] = &C_EntityParticleTrail::`vftable';
  this[3] = &C_EntityParticleTrail::`vftable';
  this[298] = &C_EntityParticleTrail::`vftable';
  sub_100F0920();
  sub_100EF970(v4);
  sub_10011CB0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
