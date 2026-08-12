_DWORD *__thiscall sub_1022CB50(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a3;
  *this = a2;
  this[2] = dword_1047A4A0;
  dword_1047A4A0 = (int)this;
  return result;
}
