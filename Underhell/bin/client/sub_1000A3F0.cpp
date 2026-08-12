_DWORD *__thiscall sub_1000A3F0(_DWORD *this, char a2)
{
  this[1] = 0;
  this[2] = 0;
  *this = &IMaterialProxy::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
