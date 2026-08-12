_DWORD *__thiscall sub_1015EE90(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  *this = a2;
  this[1] = a3;
  this[2] = dword_106B3EF8;
  dword_106B3EF8 = (int)this;
  return result;
}
