_DWORD *__thiscall sub_102A9E10(_DWORD *this)
{
  this[1] = 0;
  this[3] = 0;
  *this = &CAI_PolicingBehavior::`vftable';
  this[10] = -1;
  if ( dword_1065F648 != dword_10694898 )
  {
    sub_102A9710();
    byte_1065F644 = 1;
    dword_1065F648 = dword_10694898;
  }
  *((_BYTE *)this + 16) = 0;
  this[7] = 0;
  *((_BYTE *)this + 32) = 0;
  return this;
}
