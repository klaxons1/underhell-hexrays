_DWORD *__thiscall sub_10081880(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = &CGameEventListener::`vftable';
  *((_BYTE *)this + 8) = 0;
  this[3] = 0;
  this[4] = 0;
  this[6] = 0;
  *this = &ClientModeShared::`vftable';
  this[1] = &ClientModeShared::`vftable';
  this[8] = -1;
  this[7] = -1;
  return result;
}
