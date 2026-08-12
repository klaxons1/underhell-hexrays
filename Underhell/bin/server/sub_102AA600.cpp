_DWORD *__thiscall sub_102AA600(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  *this = &CAI_Spotlight::`vftable';
  this[2] = -1;
  this[3] = -1;
  return result;
}
