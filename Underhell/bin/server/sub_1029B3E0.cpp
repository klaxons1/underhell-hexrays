_DWORD *__thiscall sub_1029B3E0(_DWORD *this)
{
  this[1] = 0;
  this[3] = 0;
  *this = &CAI_ActBusyBehavior::`vftable';
  this[15] = -1;
  this[17] = -1;
  this[24] = 0;
  this[25] = 0;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  if ( dword_1065D18C != dword_10694898 )
  {
    sub_10299690();
    byte_1065D188 = 1;
    dword_1065D18C = dword_10694898;
  }
  *((_BYTE *)this + 16) = 0;
  *((_BYTE *)this + 28) = 0;
  *((float *)this + 22) = 0.0;
  return this;
}
