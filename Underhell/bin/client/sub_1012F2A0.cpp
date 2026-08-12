_DWORD *__thiscall sub_1012F2A0(_DWORD *this)
{
  _DWORD *result; // eax
  unsigned int v2; // edx

  result = this;
  *this = &CAvatarImage::`vftable';
  this[1] = 0;
  this[12] &= 0xFF0FFFFF;
  *((_BYTE *)this + 51) = 0;
  this[12] &= 0xFFF00000;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 51) = 0;
  v2 = this[12] & 0xFF000001;
  this[11] = 0;
  this[12] = v2 | 1;
  this[8] = 0;
  this[3] = 0;
  this[4] = 0;
  return result;
}
