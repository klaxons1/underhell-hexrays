void sub_100AE260(int a1, char *Format, ...)
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
  if ( (*(_BYTE *)(a1 + 4) & 3) != 0 )
  {
    sub_102283C0(Buffer, 0x800u, Format, va);
    _time64(&Time);
    v2 = _localtime64(&Time);
    v3 = asctime(v2);
    sub_102282F0(Str, v3, 0x80u);
    v4 = strstr(Str, "\n");
    if ( v4 )
      *v4 = 0;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
      DevMsg("[GS %s - %7.2f] %s", Str, *(float *)off_103DC81C, Buffer);
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v5 = dword_1042EA64;
      if ( dword_1042EA64
        || (v5 = (*(int (__thiscall **)(int, const char *, const char *, const char *))(*(_DWORD *)(dword_10413188 + 4)
                                                                                      + 8))(
                   dword_10413188 + 4,
                   "gamestats.log",
                   "a",
                   "MOD"),
            (dword_1042EA64 = v5) != 0) )
      {
        (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_10413188 + 96))(
          dword_10413188,
          v5,
          "[GS %s - %7.2f] %s",
          Str,
          *(float *)off_103DC81C,
          Buffer);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 32))(dword_10413188 + 4, dword_1042EA64);
      }
    }
  }
}
