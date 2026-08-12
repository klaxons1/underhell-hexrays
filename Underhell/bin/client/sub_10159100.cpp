int __thiscall sub_10159100(_DWORD *this)
{
  _DWORD *v2; // eax
  int v4; // [esp-4h] [ebp-8h]

  v4 = (int)(this + 299);
  *this = &C_ParticleSmokeGrenade::`vftable';
  this[1] = &C_ParticleSmokeGrenade::`vftable';
  this[2] = &C_ParticleSmokeGrenade::`vftable';
  this[3] = &C_ParticleSmokeGrenade::`vftable';
  this[298] = &C_ParticleSmokeGrenade::`vftable';
  this[356] = &C_ParticleSmokeGrenade::`vftable';
  v2 = sub_100F0920();
  sub_100EF970(v2, v4);
  sub_1015E180(this + 1900);
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
