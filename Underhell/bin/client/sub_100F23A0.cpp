_DWORD *__thiscall sub_100F23A0(_DWORD *this, int a2, void *Src)
{
  *this = &IParticleEffect::`vftable';
  sub_101FB7A0(this + 4);
  this[2] = &IClientRenderable::`vftable';
  this[1] = &CDefaultClientRenderable::`vftable';
  this[2] = &CDefaultClientRenderable::`vftable';
  *((_WORD *)this + 6) = -1;
  *this = &CNewParticleEffect::`vftable';
  this[1] = &CNewParticleEffect::`vftable';
  this[2] = &CNewParticleEffect::`vftable';
  this[1676] = 0;
  this[1685] = -1;
  memset(this + 1686, 0xFFu, 0x100u);
  if ( a2 )
    this[1685] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[1685] = -1;
  sub_101FCBD0(Src);
  sub_100F1BC0((int)this);
  return this;
}
