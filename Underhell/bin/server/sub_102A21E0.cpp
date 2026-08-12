_DWORD *__thiscall sub_102A21E0(_DWORD *this)
{
  this[1] = 0;
  this[3] = 0;
  *this = &CAI_PassengerBehavior::`vftable';
  this[4] = 0;
  this[17] = -1;
  this[18] = -1;
  *((_BYTE *)this + 100) = 0;
  this[26] = 0;
  *((_BYTE *)this + 108) = 0;
  this[28] = -1;
  if ( dword_1065EAE8 != dword_10694898 )
  {
    sub_102A1BD0();
    byte_1065EAE4 = 1;
    dword_1065EAE8 = dword_10694898;
  }
  return this;
}
