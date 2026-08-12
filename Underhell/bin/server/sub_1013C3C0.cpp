_BYTE *__thiscall sub_1013C3C0(_BYTE *this)
{
  _BYTE *result; // eax

  result = this;
  this[4] = 0;
  *((_DWORD *)this + 2) = &CBaseGameSystem::`vftable';
  *(_DWORD *)this = &CEventLog::`vftable';
  *((_DWORD *)this + 2) = &CEventLog::`vftable';
  return result;
}
