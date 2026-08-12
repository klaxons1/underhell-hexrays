_DWORD *__thiscall sub_1002DEB0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  *((_WORD *)this + 10) = -1;
  v2 = *this;
  this[3] = -1;
  this[4] = 0xFFFF;
  this[6] = v2;
  return result;
}
