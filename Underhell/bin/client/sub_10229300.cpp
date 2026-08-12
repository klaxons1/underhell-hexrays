_BYTE *__thiscall sub_10229300(
        _BYTE *this,
        int a2,
        const char *a3,
        int a4,
        char *a5,
        char a6,
        float a7,
        char a8,
        float a9)
{
  this[8] = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = &IConVar::`vftable';
  *(_DWORD *)this = &ConVar::`vftable';
  *((_DWORD *)this + 6) = &ConVar::`vftable';
  sub_10229040(this, a2, a3, a4, a5, a6, a7, a8, a9, 0);
  return this;
}
