int __thiscall sub_10158120(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)this[808];
  *this = &C_MovieExplosion::`vftable';
  this[1] = &C_MovieExplosion::`vftable';
  this[2] = &C_MovieExplosion::`vftable';
  this[3] = &C_MovieExplosion::`vftable';
  this[298] = &C_MovieExplosion::`vftable';
  this[356] = &C_MovieExplosion::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)(this + 299));
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
