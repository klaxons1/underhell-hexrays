_DWORD *__thiscall sub_1009AEA0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = this;
  *this = a2;
  this[1] = a3;
  this[2] = 0;
  this[3] = a4;
  *((_WORD *)this + 8) = 0;
  return result;
}
