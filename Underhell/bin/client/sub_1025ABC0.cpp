int __thiscall sub_1025ABC0(int *this, _DWORD *a2)
{
  int v3; // eax
  char *v4; // edi
  unsigned int v5; // kr00_4
  char *v6; // eax
  int result; // eax
  const char *v8; // edi
  int v9; // ebx
  int v10; // edi
  int v11; // eax

  sub_10241C00(this, a2);
  this[79] = sub_1022A800(a2, "maxchars", -1);
  v3 = sub_1022A800(a2, "scrollbar", 1);
  LOBYTE(v3) = v3 != 0;
  sub_1025A5B0(this, v3);
  v4 = (char *)sub_1022B4C0(a2, "text", (int)Locale);
  if ( *v4 )
  {
    sub_10034930(this[96]);
    v5 = strlen(v4);
    v6 = (char *)sub_100DDA40(v5 + 1);
    this[96] = (int)v6;
    sub_102282F0(v6, v4, v5 + 1);
    return sub_1025A8E0((char *)this, v4);
  }
  else
  {
    result = sub_1022B4C0(a2, "textfile", 0);
    v8 = (const char *)result;
    if ( result )
    {
      v9 = (*(int (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
             dword_1047C968 + 4,
             result,
             "rt",
             0);
      if ( v9 )
      {
        v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 28))(dword_1047C968 + 4, v9);
        sub_10034930(this[96]);
        v11 = sub_100DDA40(v10 + 1);
        this[96] = v11;
        (**(void (__thiscall ***)(int, int, int, int))(dword_1047C968 + 4))(dword_1047C968 + 4, v11, v10, v9);
        *(_BYTE *)(this[96] + v10 - 1) = 0;
        sub_1025A8E0((char *)this, (LPCCH)this[96]);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v9);
      }
      else
      {
        return Warning("RichText: textfile parameter '%s' not found.\n", v8);
      }
    }
  }
  return result;
}
