_DWORD *__thiscall sub_100798F0(_DWORD *this, char a2)
{
  *this = &CAI_Motor::`vftable';
  this[2] = &CAI_Motor::`vftable';
  sub_102375F0(this + 17);
  *this = &CAI_Component::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
