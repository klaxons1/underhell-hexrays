_DWORD *__thiscall sub_100F3AA0(_DWORD *this, char a2)
{
  *this = &CBaseGrenade::`vftable';
  this[526] = &CBaseGrenade::`vftable';
  sub_100CF2B0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
