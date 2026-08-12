_DWORD *__thiscall sub_10144170(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 1;
  *((float *)this + 24) = 0.0;
  *((_WORD *)this + 60) = 1;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 100) = 0;
  this[31] = a2 + 456;
  this[32] = a2;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  *this = &CSkyboxView::`vftable';
  this[39] = 0;
  return result;
}
