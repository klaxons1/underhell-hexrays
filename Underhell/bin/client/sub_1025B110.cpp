char __thiscall sub_1025B110(_DWORD **this, _DWORD *a2)
{
  const char *v3; // eax
  char v4; // al
  const char *v6; // eax
  unsigned __int8 v7; // al
  const char *v8; // eax
  _DWORD *v9; // ecx
  const char *v10; // [esp-4h] [ebp-Ch]

  v3 = (const char *)sub_10229A00(a2);
  if ( !_stricmp(v3, "CanBeDefaultButton") )
  {
    v4 = ((int (__thiscall *)(_DWORD **))(*this)[244])(this);
    sub_1022ACA0(a2, "result", v4 != 0);
    return 1;
  }
  else
  {
    v6 = (const char *)sub_10229A00(a2);
    if ( !_stricmp(v6, "GetState") )
    {
      v7 = ((int (__thiscall *)(_DWORD **))(*this)[233])(this);
      sub_1022ACA0(a2, "state", v7);
      return 1;
    }
    else
    {
      v8 = (const char *)sub_10229A00(a2);
      if ( !_stricmp(v8, "GetCommand") )
      {
        v9 = this[75];
        v10 = Locale;
        if ( v9 )
          v10 = (const char *)sub_1022B4C0(v9, "command", (int)Locale);
        sub_1022ABA0(a2, "command", v10);
        return 1;
      }
      else
      {
        return sub_10249C10(this, a2);
      }
    }
  }
}
