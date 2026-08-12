_WORD *__thiscall sub_100275B0(_WORD *this, char a2)
{
  *(_DWORD *)this = &CMouthInfo::`vftable';
  this[30] = 0;
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
