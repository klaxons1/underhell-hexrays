_DWORD *__thiscall sub_10420DB0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  *((_BYTE *)this + 4) = 0;
  *this = 0;
  *((_BYTE *)this + 152) = 1;
  return result;
}
