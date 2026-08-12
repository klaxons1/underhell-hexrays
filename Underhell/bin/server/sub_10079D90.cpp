_DWORD *__thiscall sub_10079D90(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  *this = &CAI_MoveProbe::`vftable';
  *((_BYTE *)this + 8) = 0;
  this[3] = 0;
  this[4] = -1;
  return result;
}
