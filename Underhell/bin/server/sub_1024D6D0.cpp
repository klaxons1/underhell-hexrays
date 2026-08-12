_BYTE *__thiscall sub_1024D6D0(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  this[16] = 0;
  *(_DWORD *)this = 0;
  return result;
}
