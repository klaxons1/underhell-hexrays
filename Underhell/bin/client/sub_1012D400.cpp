_DWORD *__thiscall sub_1012D400(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  *this = &CTraceFilterSimple::`vftable';
  this[1] = a2;
  this[2] = a3;
  return result;
}
