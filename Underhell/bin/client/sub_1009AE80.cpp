_DWORD *__thiscall sub_1009AE80(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_WORD *)this + 8) = 0;
  return result;
}
