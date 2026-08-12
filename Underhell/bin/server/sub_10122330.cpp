_BYTE *__thiscall sub_10122330(_BYTE *this, int a2, int a3, int a4)
{
  _BYTE *result; // eax

  result = this;
  this[16] &= 0xF8u;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = 0;
  return result;
}
