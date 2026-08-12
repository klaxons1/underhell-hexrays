_DWORD *__thiscall sub_101C6BE0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  this[3] = a4;
  this[2] = a3;
  *this = &off_103528C0;
  this[5] = a5;
  *((_BYTE *)this + 16) = a5 != 0;
  *((_BYTE *)this + 24) = 0;
  return result;
}
