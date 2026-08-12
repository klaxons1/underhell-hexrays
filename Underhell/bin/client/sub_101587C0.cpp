int __thiscall sub_101587C0(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)this[357];
  *this = &C_ParticleFire::`vftable';
  this[1] = &C_ParticleFire::`vftable';
  this[2] = &C_ParticleFire::`vftable';
  this[3] = &C_ParticleFire::`vftable';
  this[298] = &C_ParticleFire::`vftable';
  this[356] = &C_ParticleFire::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)(this + 299));
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
