_BYTE *__thiscall sub_10122310(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  this[16] &= 0xF8u;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  return result;
}
