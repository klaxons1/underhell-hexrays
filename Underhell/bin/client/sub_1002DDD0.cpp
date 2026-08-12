_DWORD *__thiscall sub_1002DDD0(_DWORD *this, char a2)
{
  int v3; // eax

  *this = &CInterpolatedVarArrayBase<float,0>::`vftable';
  *(_DWORD *)((char *)this + 14) = 0;
  sub_10034930(this[8]);
  sub_10034930(this[5]);
  v3 = this[2];
  if ( v3 )
    sub_10034930(v3 - 4);
  this[2] = 0;
  *this = &IInterpolatedVar::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
