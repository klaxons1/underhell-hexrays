void *__thiscall sub_1042CA50(void *this)
{
  void *v2; // eax
  const char *v3; // eax
  double v4; // st7
  char *v5; // ecx
  const void *v7; // [esp-Ch] [ebp-14h]
  size_t v8; // [esp-8h] [ebp-10h]

  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = &IConVar::`vftable';
  *(_DWORD *)this = &ConVar::`vftable';
  *((_DWORD *)this + 6) = &ConVar::`vftable';
  *((_DWORD *)this + 7) = this;
  *((_DWORD *)this + 8) = "0";
  *((_DWORD *)this + 10) = 2;
  v2 = (void *)sub_10184390(2);
  v8 = *((_DWORD *)this + 10);
  v7 = (const void *)*((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v2;
  memcpy_0(v2, v7, v8);
  v3 = (const char *)*((_DWORD *)this + 9);
  *((float *)this + 14) = 0.0;
  *((float *)this + 16) = 0.0;
  *((_BYTE *)this + 52) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 17) = 0;
  v4 = atof(v3);
  *((float *)this + 11) = v4;
  v5 = (char *)off_1068E2AC[0];
  *((_DWORD *)this + 12) = (int)v4;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = String;
  *((_DWORD *)this + 4) = v5;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = dword_106FE528;
  dword_106FE528 = (int)this;
  if ( dword_106FE52C )
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
  *(_DWORD *)this = &CEmptyConVar::`vftable';
  *((_DWORD *)this + 6) = &CEmptyConVar::`vftable';
  return this;
}
