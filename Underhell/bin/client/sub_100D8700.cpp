_DWORD *__thiscall sub_100D8700(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &CInput::`vftable';
  this[63] = -1;
  this[64] = 0;
  this[65] = 0;
  this[66] = 0;
  this[67] = 0;
  this[68] = 0;
  *((float *)this + 9) = 0.0;
  this[60] = 0;
  this[62] = 0;
  this[61] = 0;
  *((_BYTE *)this + 185) = 0;
  return result;
}
