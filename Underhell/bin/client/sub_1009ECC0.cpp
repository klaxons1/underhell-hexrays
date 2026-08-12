_DWORD *__thiscall sub_1009ECC0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  *this = &CFunctionProxy::`vftable';
  this[3] = 0;
  this[4] = 0;
  return result;
}
