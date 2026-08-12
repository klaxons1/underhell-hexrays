_DWORD *__thiscall sub_1006CC00(_DWORD *this)
{
  sub_1003D000((int)this);
  *this = &C_Sun::`vftable';
  this[1] = &C_Sun::`vftable';
  this[2] = &C_Sun::`vftable';
  this[3] = &C_Sun::`vftable';
  sub_100AFB90(this + 298);
  this[298] = &C_SunGlowOverlay::`vftable';
  sub_100AFB90(this + 340);
  this[340] = &C_SunGlowOverlay::`vftable';
  *((_BYTE *)this + 1208) = 1;
  *((_BYTE *)this + 1224) = 1;
  *((_BYTE *)this + 1376) = 1;
  *((_BYTE *)this + 1392) = 1;
  return this;
}
