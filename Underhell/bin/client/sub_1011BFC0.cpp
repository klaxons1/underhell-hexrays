_DWORD *__thiscall sub_1011BFC0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  *this = a2;
  this[1] = a3;
  this[2] = dword_10437688;
  dword_10437688 = (int)this;
  return result;
}
