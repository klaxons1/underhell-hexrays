bool (__cdecl **__thiscall sub_10067CD0(bool (__cdecl **this)(int a1, int a2)))(int a1, int a2)
{
  bool (__cdecl **result)(int, int); // eax

  result = this;
  *this = sub_10065450;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_WORD *)this + 8) = -1;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 10) = -1;
  *((_WORD *)this + 11) = -1;
  this[6] = this[1];
  return result;
}
