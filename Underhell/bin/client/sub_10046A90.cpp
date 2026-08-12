int __thiscall sub_10046A90(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  this[44] = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *(_DWORD *)((char *)this + 190) = 0;
  sub_10034930(this[52]);
  sub_10034930(this[49]);
  v2 = this[46];
  if ( v2 )
    sub_10034930(v2 - 4);
  this[46] = 0;
  this[44] = &IInterpolatedVar::`vftable';
  this[30] = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *(_DWORD *)((char *)this + 134) = 0;
  sub_10034930(this[38]);
  sub_10034930(this[35]);
  result = this[32];
  if ( result )
    result = sub_10034930(result - 4);
  this[32] = 0;
  this[30] = &IInterpolatedVar::`vftable';
  return result;
}
