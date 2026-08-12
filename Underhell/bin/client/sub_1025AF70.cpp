_DWORD *__thiscall sub_1025AF70(_DWORD *this, char a2, char a3)
{
  _DWORD *result; // eax
  int v4; // edx

  result = this;
  v4 = 1 << (a2 + 1);
  if ( a3 )
    this[74] |= v4;
  else
    this[74] &= ~v4;
  return result;
}
