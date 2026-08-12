_DWORD *__thiscall sub_10103B90(_DWORD *this, char a2)
{
  _DWORD *result; // eax

  result = this;
  this[17] |= 1 << a2;
  return result;
}
