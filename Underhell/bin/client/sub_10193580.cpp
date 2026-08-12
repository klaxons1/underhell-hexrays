_DWORD *__thiscall sub_10193580(_DWORD *this, char a2)
{
  void (__thiscall *v3)(_DWORD *); // edx

  v3 = *(void (__thiscall **)(_DWORD *))(this[848] + 48);
  *this = &C_CombineGunship::`vftable';
  this[1] = &C_CombineGunship::`vftable';
  this[2] = &C_CombineGunship::`vftable';
  this[3] = &C_CombineGunship::`vftable';
  v3(this + 848);
  sub_10179220(this + 848);
  sub_10033490(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
