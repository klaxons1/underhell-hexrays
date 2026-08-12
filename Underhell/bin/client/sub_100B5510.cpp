_BYTE *__thiscall sub_100B5510(_BYTE *this, int a2)
{
  _BYTE *result; // eax

  result = this;
  this[4] = 0;
  *(_DWORD *)this = &CHudElement::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  this[8] = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = a2;
  *((_WORD *)this + 10) = 0;
  return result;
}
