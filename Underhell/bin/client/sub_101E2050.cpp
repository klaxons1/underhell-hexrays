_BYTE *__thiscall sub_101E2050(_BYTE *this, int (__stdcall ***a2)(_DWORD, int, _BYTE *), int a3, float a4)
{
  _BYTE *result; // eax

  result = this;
  this[376] |= 0x10u;
  if ( a2 )
    return (_BYTE *)(**a2)(LODWORD(a4), a3, this);
  return result;
}
