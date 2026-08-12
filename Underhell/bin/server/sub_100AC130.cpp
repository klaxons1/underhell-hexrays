_DWORD *__thiscall sub_100AC130(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  *this = &CAI_SentenceBase::`vftable';
  this[3] = -1;
  return result;
}
