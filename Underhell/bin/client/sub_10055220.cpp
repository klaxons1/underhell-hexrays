_DWORD *__thiscall sub_10055220(_DWORD *this, char a2)
{
  int v4; // [esp-4h] [ebp-8h]

  v4 = this[434];
  *this = &C_FuncSmokeVolume::`vftable';
  this[1] = &C_FuncSmokeVolume::`vftable';
  this[2] = &C_FuncSmokeVolume::`vftable';
  this[3] = &C_FuncSmokeVolume::`vftable';
  this[298] = &C_FuncSmokeVolume::`vftable';
  this[356] = &C_FuncSmokeVolume::`vftable';
  sub_10034930(v4);
  this[356] = &IPrototypeAppEffect::`vftable';
  sub_10011CB0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
