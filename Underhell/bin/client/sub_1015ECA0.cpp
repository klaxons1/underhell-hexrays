int __thiscall sub_1015ECA0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // ecx

  v2 = (_DWORD *)this[385];
  *this = &C_RocketTrail::`vftable';
  this[1] = &C_RocketTrail::`vftable';
  this[2] = &C_RocketTrail::`vftable';
  this[3] = &C_RocketTrail::`vftable';
  this[298] = &C_RocketTrail::`vftable';
  this[356] = &C_RocketTrail::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)(this + 299));
  v3 = this[386];
  if ( v3 )
    sub_100F2FF0(v3);
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
