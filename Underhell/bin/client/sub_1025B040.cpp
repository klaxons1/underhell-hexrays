void __thiscall sub_1025B040(int *this)
{
  _DWORD *v2; // ecx
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // eax

  v2 = (_DWORD *)this[75];
  if ( v2 )
  {
    v3 = (const char *)sub_10229A00(v2);
    if ( !_stricmp(v3, "command") )
    {
      v4 = (const char *)sub_1022B4C0((_DWORD *)this[75], "command", (int)Locale);
      if ( !_strnicmp(v4, "url ", 4u) )
      {
        v5 = (const char *)sub_1022B4C0((_DWORD *)this[75], "command", (int)Locale);
        if ( strstr(v5, "://") )
        {
          v6 = dword_1047CA80;
          v7 = *(_DWORD *)dword_1047CA80;
          v8 = sub_1022B4C0((_DWORD *)this[75], "command", (int)"      ");
          (*(void (__thiscall **)(int, const char *, int))(v7 + 12))(v6, "open", v8 + 4);
        }
      }
    }
    v9 = *this;
    v10 = sub_1022AD00((_DWORD *)this[75]);
    (*(void (__thiscall **)(int *, int))(v9 + 180))(this, v10);
  }
}
