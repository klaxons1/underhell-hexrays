_DWORD *__thiscall sub_101EA970(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[64] = 0;
  this[65] = 0;
  this[66] = 0;
  this[67] = 0;
  this[68] = 0;
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 276) = 1;
  return result;
}
