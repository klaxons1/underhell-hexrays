char *__thiscall sub_10065740(char *this)
{
  __int16 v2; // ax

  *((_DWORD *)this + 37) = 100;
  v2 = sub_10065220(0.0);
  *((_WORD *)this + 68) = v2;
  *((_WORD *)this + 69) = v2;
  *((_WORD *)this + 70) = v2;
  *((_WORD *)this + 71) = v2;
  *((_WORD *)this + 72) = v2;
  *((_WORD *)this + 73) = v2;
  this[152] = 0;
  *(_WORD *)(this + 153) = v2;
  *(_WORD *)(this + 155) = v2;
  *(_WORD *)this = 0;
  *((_DWORD *)this + 33) = 0;
  this[65] = 0;
  *((_DWORD *)this + 40) = 0;
  this[164] = 0;
  return this;
}
