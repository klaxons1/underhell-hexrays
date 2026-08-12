int __thiscall sub_102C6F90(int this)
{
  bool (__cdecl **v2)(const char **, const char **); // ecx

  sub_102BFB30((_DWORD *)this);
  v2 = (bool (__cdecl **)(const char **, const char **))(this + 96);
  *(_DWORD *)this = &CEP2GameStats::`vftable';
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_WORD *)(this + 112) = -1;
  *(_WORD *)(this + 114) = 0;
  *(_WORD *)(this + 116) = -1;
  *(_WORD *)(this + 118) = -1;
  *(_DWORD *)(this + 120) = *(_DWORD *)(this + 100);
  if ( !*(_DWORD *)(this + 96) )
    *v2 = sub_10002010;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 92) = 0;
  sub_102C6650(v2);
  return this;
}
