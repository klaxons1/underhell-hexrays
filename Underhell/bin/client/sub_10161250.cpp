int __thiscall sub_10161250(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)this[414];
  *this = &C_SmokeStack::`vftable';
  this[1] = &C_SmokeStack::`vftable';
  this[2] = &C_SmokeStack::`vftable';
  this[3] = &C_SmokeStack::`vftable';
  this[298] = &C_SmokeStack::`vftable';
  this[356] = &C_SmokeStack::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)(this + 299));
  this[356] = &IPrototypeAppEffect::`vftable';
  return sub_10011CB0(this);
}
