_DWORD *__thiscall sub_101219D0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = dword_1069C76C;
  dword_1069C76C = (int)this;
  *this = a2;
  return result;
}
