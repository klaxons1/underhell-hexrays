_DWORD *__thiscall sub_101F70F0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[2] = 0;
  this[1] = 0;
  *this = &CTransformManipulator::`vftable';
  this[3] = a2;
  return result;
}
