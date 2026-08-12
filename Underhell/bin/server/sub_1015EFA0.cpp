void sub_1015EFA0(int a1, char *Format, ...)
{
  struct tm *v2; // eax
  char *v3; // eax
  char *v4; // eax
  int v5; // eax
  char Buffer[2048]; // [esp+1Ch] [ebp-888h] BYREF
  char Str[128]; // [esp+81Ch] [ebp-88h] BYREF
  __time64_t Time; // [esp+89Ch] [ebp-8h] BYREF
  va_list va; // [esp+8B4h] [ebp+10h] BYREF

  va_start(va, Format);
  if ( (*(_BYTE *)(a1 + 88) & 3) != 0 )
  {
    sub_10429A50(Buffer, 0x800u, Format, va);
    _time64(&Time);
    v2 = _localtime64(&Time);
    v3 = asctime(v2);
    sub_104299C0(Str, v3, 0x80u);
    v4 = strstr(Str, "\n");
    if ( v4 )
      *v4 = 0;
    if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
      DevMsg("[GS %s - %7.2f] %s", Str, *(float *)dword_106B31C8, Buffer);
    if ( (*(_BYTE *)(a1 + 88) & 2) != 0 )
    {
      v5 = dword_106B3F14;
      if ( dword_106B3F14
        || (v5 = (*(int (__thiscall **)(int, const char *, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4)
                                                                                      + 8))(
                   dword_106B31D8 + 4,
                   "gamestats.log",
                   "a",
                   "MOD"),
            (dword_106B3F14 = v5) != 0) )
      {
        (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_106B31D8 + 96))(
          dword_106B31D8,
          v5,
          "[GS %s - %7.2f] %s",
          Str,
          *(float *)dword_106B31C8,
          Buffer);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 32))(dword_106B31D8 + 4, dword_106B3F14);
      }
    }
  }
}
