_DWORD *__thiscall sub_10179270(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = &IClientRenderable::`vftable';
  *((_WORD *)this + 4) = -1;
  *this = &C_EnvelopeFX::`vftable';
  this[1] = &C_EnvelopeFX::`vftable';
  *((_BYTE *)this + 20) = 0;
  return result;
}
