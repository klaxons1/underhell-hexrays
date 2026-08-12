_DWORD *__thiscall sub_1009ABD0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[5] = 0;
  *this = 0;
  this[11] = 0;
  this[1] = 0;
  this[2] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[13] = 1;
  this[12] = -1;
  this[6] = 0;
  this[7] = 0;
  *((_BYTE *)this + 16) = 0;
  return result;
}
