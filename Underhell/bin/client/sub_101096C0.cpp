_DWORD *__thiscall sub_101096C0(
        _DWORD *this,
        int a2,
        int a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        int a11)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a3;
  *this = a2;
  this[2] = a5;
  this[6] = 0;
  this[8] = 0;
  this[7] = 0;
  *((_WORD *)this + 18) = 0;
  this[10] = 0;
  this[3] = a4 != 0;
  this[12] = a11;
  this[4] = a6 != 0;
  *((_BYTE *)this + 20) = a7;
  *((_BYTE *)this + 21) = a8;
  *((_BYTE *)this + 44) = a9;
  *((_BYTE *)this + 22) = a10;
  return result;
}
