_DWORD *__thiscall sub_101689B0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  *this = a2;
  this[1] = a3;
  this[2] = dword_10442948;
  dword_10442948 = (int)this;
  return result;
}
