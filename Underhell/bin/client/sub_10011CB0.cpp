int __thiscall sub_10011CB0(_DWORD *this)
{
  *this = &C_BaseParticleEntity::`vftable';
  this[1] = &C_BaseParticleEntity::`vftable';
  this[2] = &C_BaseParticleEntity::`vftable';
  this[3] = &C_BaseParticleEntity::`vftable';
  this[298] = &C_BaseParticleEntity::`vftable';
  if ( (unsigned __int8)sub_101BC880()
    && this[353] != -1
    && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      sub_10229D20("ParticleSystem_Destroy");
    sub_1022ACA0("id", this[353]);
    this[353] = -1;
  }
  sub_100EFC20(this + 299);
  this[298] = &IParticleEffect::`vftable';
  return sub_1003D350(this);
}
