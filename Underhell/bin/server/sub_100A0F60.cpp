char *__thiscall sub_100A0F60(char *this)
{
  __int16 v2; // ax
  char v3; // dl

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 100;
  v2 = sub_10065220(0.0);
  *((_WORD *)this + 10) = v2;
  *((_WORD *)this + 11) = v2;
  *((_WORD *)this + 12) = v2;
  *((_WORD *)this + 13) = v2;
  *((_WORD *)this + 14) = v2;
  *((_WORD *)this + 15) = v2;
  this[36] = 0;
  *(_WORD *)(this + 37) = v2;
  *(_WORD *)(this + 39) = v2;
  v3 = this[44] & 0xE0 | 1;
  this[43] = 1;
  *(_WORD *)(this + 41) = 1;
  this[44] = v3;
  return this;
}
