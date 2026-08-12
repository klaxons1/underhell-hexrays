_BYTE *__thiscall sub_10229240(_BYTE *this, int a2, const char *a3, int a4)
{
  this[8] = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = &IConVar::`vftable';
  *(_DWORD *)this = &ConVar::`vftable';
  *((_DWORD *)this + 6) = &ConVar::`vftable';
  sub_10229040(this, a2, a3, a4, 0, 0, 0.0, 0, 0.0, 0);
  return this;
}
