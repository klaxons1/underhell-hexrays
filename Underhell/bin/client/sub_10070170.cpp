_DWORD *__thiscall sub_10070170(_DWORD *this, char a2)
{
  int v3; // edi

  v3 = this[572];
  *this = &C_PropJeep::`vftable';
  this[1] = &C_PropJeep::`vftable';
  this[2] = &C_PropJeep::`vftable';
  this[3] = &C_PropJeep::`vftable';
  this[490] = &C_PropJeep::`vftable';
  if ( v3 )
  {
    sub_1009D410(v3);
    sub_10034930(v3);
  }
  sub_1015B5A0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
