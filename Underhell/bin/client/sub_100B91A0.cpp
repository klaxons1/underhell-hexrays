int __thiscall sub_100B91A0(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax

  result = strcmp("hltv_chat", (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2));
  if ( !result )
  {
    result = sub_100422D0();
    if ( result )
    {
      v4 = *this;
      v5 = result + 8;
      v6 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a2 + 32))(a2, "text", Locale);
      v7 = (*(int (__thiscall **)(int, _DWORD, const char *, int))(*(_DWORD *)v5 + 36))(v5, 0, "(SourceTV) %s", v6);
      return (*(int (__cdecl **)(int *, int))(v4 + 72))(this, v7);
    }
  }
  return result;
}
