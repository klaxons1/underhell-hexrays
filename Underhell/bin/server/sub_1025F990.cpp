_DWORD *__thiscall sub_1025F990(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  *this = &CFlaggedEntitiesEnum::`vftable';
  this[2] = a3;
  this[3] = a4;
  this[4] = 0;
  return result;
}
