_DWORD *__thiscall sub_1042FD90(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a3;
  *this = a2;
  this[2] = dword_106FF8F4;
  dword_106FF8F4 = (int)this;
  return result;
}
