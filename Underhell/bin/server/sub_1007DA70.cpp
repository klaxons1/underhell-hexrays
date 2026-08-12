_DWORD *__thiscall sub_1007DA70(_DWORD *this, char a2)
{
  _DWORD *result; // eax

  result = this;
  this[4] = 0;
  this[5] = 0;
  *this = (a2 != 0) - 1;
  this[1] = a2 != 0 ? 0 : 0x270F;
  this[2] = -1;
  this[3] = -1;
  return result;
}
