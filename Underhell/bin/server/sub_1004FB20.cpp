_DWORD *__thiscall sub_1004FB20(_DWORD *this)
{
  this[1] = 0;
  this[3] = 0;
  *this = &CAI_AssaultBehavior::`vftable';
  if ( dword_10601DD4 != dword_10694898 )
  {
    sub_1004EC20();
    byte_10601DD0 = 1;
    dword_10601DD4 = dword_10694898;
  }
  this[5] = -1;
  this[6] = -1;
  this[7] = 0;
  return this;
}
