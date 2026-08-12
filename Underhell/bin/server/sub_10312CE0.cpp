_DWORD *__thiscall sub_10312CE0(_DWORD *this)
{
  _DWORD *result; // eax

  sub_101AAC00((int)this);
  *this = &CNPC_APCDriver::`vftable';
  this[526] = &CNPC_APCDriver::`vftable';
  sub_101AABC0();
  if ( dword_1066C744 != dword_10694898 )
  {
    sub_10312BA0();
    byte_1066C740 = 1;
    dword_1066C744 = dword_10694898;
  }
  result = this;
  this[939] = -1;
  return result;
}
