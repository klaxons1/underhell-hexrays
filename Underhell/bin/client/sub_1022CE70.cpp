_DWORD *__thiscall sub_1022CE70(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  *this = &CDllDemandLoader::`vftable';
  this[2] = 0;
  *((_BYTE *)this + 12) = 0;
  return result;
}
