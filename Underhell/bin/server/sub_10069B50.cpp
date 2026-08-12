char *__thiscall sub_10069B50(char *this)
{
  sub_100E33C0(1);
  *(_WORD *)(this + 829) = 0;
  *((_DWORD *)this + 205) = 0;
  this[828] = 0;
  *(_DWORD *)this = &CAI_DynamicLink::`vftable';
  *((_DWORD *)this + 203) = -1;
  *((_DWORD *)this + 204) = -1;
  *((_DWORD *)this + 208) = 1;
  *((_DWORD *)this + 200) = dword_10692E2C;
  dword_10692E2C = (int)this;
  return this;
}
