char *__thiscall sub_100B3A90(char *this)
{
  memset(this, 0, 0x40u);
  memset(this + 64, 0, 0x40u);
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_WORD *)this + 64) = 0;
  this[130] = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = -1;
  return this;
}
