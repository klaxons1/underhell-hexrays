_DWORD *__thiscall sub_1015D660(_DWORD *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)this[393];
  *this = &C_SporeTrail::`vftable';
  this[1] = &C_SporeTrail::`vftable';
  this[2] = &C_SporeTrail::`vftable';
  this[3] = &C_SporeTrail::`vftable';
  this[298] = &C_SporeTrail::`vftable';
  if ( v3 )
    sub_100EF970(v3, (int)(this + 299));
  sub_10011CB0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
